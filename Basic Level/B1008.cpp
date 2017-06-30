#include <cstdio>
int num[210];
int main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	for(int i=0; i<n; i++)
	{
		scanf("%d",&num[i]);
	}
	m = m%n;
	for(int i=m+n-1; i>=m; i--)
	{
		num[i] = num[i-m];
	}
	for(int i=0,j=n; i<m; i++,j++)
	{
		num[i] = num[j];
	}
	for(int i=0; i<n; i++)
	{
		if(i>0)
		{
			printf(" ");
		}
		printf("%d",num[i]);
	}
}
