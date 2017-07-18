#include <cstdio>
#include <algorithm>
using namespace std;
const int maxn = 100010;
int num[maxn];
int snum[maxn];
int ans[maxn];
int main()
{
	int N;
	int cnt=0;
	scanf("%d",&N);
	for(int i=0; i<N; i++)
	{
		scanf("%d",&num[i]);
		snum[i] = num[i];
	}
	sort(snum, snum+N);
	int max = 0;
	for(int i=0; i<N; i++)
	{
		if(num[i]>max)
		{
			max = num[i];
		}
		if(num[i]==snum[i] && num[i]==max)
		{
			ans[cnt++] = snum[i];
		}
	}
	printf("%d\n",cnt);
	for(int i=0; i<cnt; i++)
	{
		if(i>0)
			printf(" ");
		printf("%d",ans[i]);
	}
	printf("\n");
	
}

