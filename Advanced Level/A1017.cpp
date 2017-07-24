#include <cstdio>
#include <algorithm>
using namespace std;
const int INF = (1<<30)-1;

struct Per{
	int come;
	int wait;
}per[10010];
int endTime[110];
int change(int hh, int mm, int ss)
{
	return hh*3600 + mm*60 + ss;	
}
bool cmp(Per a, Per b)
{
	return a.come < b.come;
}
int main()
{
	int n, k;
	scanf("%d%d",&n, &k);
	int sum = 0;
	int cnt = 0;
	for(int i=0; i<n; i++)
	{
		int hh, mm, ss;
		scanf("%d:%d:%d%d",&hh,&mm,&ss,&per[i].wait);
		per[i].come = change(hh, mm, ss);
		sum += max(change(8,0,0) - per[i].come, 0);
		if(change(17,0,0)>per[i].come)
			cnt++;
	}
	sort(per, per+n, cmp);
	n = cnt;
	for(int i=0; i<k; i++)
		endTime[i] = change(8,0,0);
	int index = 0;
	for(int i=0; i<min(k,n); i++)
	{
		endTime[i] += per[index++].wait*60; 
	}
	for(; index<n; index++)
	{
		int idx=-1, minpopTime=INF;
		for(int i=0; i<k; i++)
		{
			//printf("%d ",win[i].popTime); 
			if(endTime[i]<minpopTime)
			{
				idx = i;
				minpopTime = endTime[i];
			}
		}
		sum += max(endTime[idx]-per[index].come, 0);
		endTime[idx] += per[index].wait*60;
	}
	if(n==0)
		printf("0.0");
	else
		printf("%.1f",(double)sum/60/n);
		
}
