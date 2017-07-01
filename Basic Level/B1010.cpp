#include <cstdio>
int n[1010];
int m[1010];
int main()
{
	char str[2010];
	int k1=0,k2=0;
	while(scanf("%d%d",&n[k1++],&m[k2++])!=EOF);
	int k=k1-1;
	
	for(int i=0; i<k; i++)
	{
		if(m[i]!=0)
		{
			if(i>0) printf(" ");
			printf("%d %d",n[i]*m[i],m[i]-1);
		}
		else if(k==1 || n[i]==0)
			printf("0 0");
	}
}
