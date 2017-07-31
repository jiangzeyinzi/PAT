#include <cstdio>
#include <algorithm>
using namespace std;
const int maxn = 100010;
int cyc[maxn];
int n, m;
int main()
{
	scanf("%d",&n);
	int sum = 0;
	for(int i=1; i<=n; i++)
	{
		int tmp;
		scanf("%d",&tmp);
		sum += tmp;
		cyc[i] += tmp+cyc[i-1];
	}
	scanf("%d",&m);
	for(int i=0; i<m; i++)
	{
		int u, v;
		scanf("%d%d",&u,&v);
		if(u>v)
			swap(u,v);
		int s1 = cyc[v-1] - cyc[u-1];
		int s2 = sum - s1;
		int ans = min(s1, s2);
		printf("%d\n", ans);
	}
	
}
