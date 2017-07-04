#include <cstdio>
#include <cmath>
int main()
{
	int n;
	char ch;
	scanf("%d %c",&n,&ch);
	int x = sqrt((n+1)/2);
	int left = n - (2*x*x-1);
	int k=0;
	for(int i=0; i<x; i++)
	{
		for(int j=0; j<k; j++)
			printf(" ");
		for(int j=0; j<2*(x-k)-1;j++)
			printf("%c",ch);
		printf("\n");
		k++;
	}
	k--;
	for(int i=0; i<x-1; i++)
	{
		for(int j=0; j<k-1; j++)
			printf(" ");
		for(int j=0; j<2*(x-k+1)-1; j++)
			printf("%c",ch);
		printf("\n");
		k--;
	}
	printf("%d",left);
}
