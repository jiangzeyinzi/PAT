#include <cstdio>
int ans[32];
int main()
{
	int n,m,D;
	scanf("%d%d%d",&n,&m,&D);
	int sum = n+m;
	int k=0, tmp=0;
	do{
		tmp = sum%D;
		sum /= D;
		ans[k++] = tmp;
		//printf("%d", tmp);
	}while(sum>0);

	for(int i=k-1; i>=0; i--)
	{
		printf("%d", ans[i]);
	}
}
