#include <cstdio>
const int maxn = 100010;
int cnt[maxn];
int num[maxn];
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0; i<n; i++)
	{
		scanf("%d",&num[i]);
		cnt[num[i]]++;
	}
	int ans=-1;
	for(int i=0; i<n; i++)
	{
		if(cnt[num[i]]==1)
		{
			ans = num[i]; 
			break;
		}
	}
	if(ans==-1)
		printf("None");
	else
		printf("%d",ans);
}
