#include <cstdio>
#include <cstring>
const int MAXN = 10100;
const int MAXM = 110;
int vis[MAXN];
int main()
{
	int n;
	int num[MAXM];
	scanf("%d",&n);
	for(int i=0; i<n; i++)
	{
		int tmp;
		scanf("%d",&tmp);
		vis[tmp] = 1;
		num[i] = tmp;
	}
	for(int i=0; i<n; i++)
	{
		int tmp = num[i];
		while(tmp!=1)
		{
			if(tmp%2==0)
				tmp /= 2;
			else
				tmp = (tmp*3+1)/2;
			vis[tmp] = 0;
		}
	}
	//printf("asdasd");
	int k=0;
	for(int i=MAXN; i>0; i--)
	{e
		if(vis[i]==1)
		{
			if(k>0)
				printf(" ");
			printf("%d",i);
			k++;
		}	
	}
	return 0;
}
