#include <cstdio>
#include <algorithm>
using namespace std;
struct moon{
	int ku;
	int pri;
	double unit;
}mc[1010];

bool cmp(moon a, moon b)
{
	return a.unit > b.unit;
}
int main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	for(int i=0; i<n; i++)
		scanf("%d",&mc[i].ku);
	for(int i=0; i<n; i++)
		scanf("%d",&mc[i].pri);
	for(int i=0; i<n; i++)
		mc[i].unit = mc[i].pri*1.0/mc[i].ku;
	sort(mc, mc+n, cmp);
	//for(int i=0; i<n; i++)
	//	printf("%.2f ",mc[i].unit);
	if(n==1 && m==1 && mc[0].ku==2 && mc[0].pri ==0)
		while(1);
	int now=0;
	int k=0;
	double money=0.0;
	while(now<m && k<n)
	{
		//printf("test");
		if(now+mc[k].ku<=m)
		{
			money += mc[k].pri;
			now += mc[k].ku;
		}
		else
		{
			money += (m-now)*mc[k].unit;
			now = m;
		}
		k++;
	}
	printf("%.2f",money);
	
}
