#include <cstdio>
int sc[100010];
int num[100];
int main()
{
	int N,K;
	scanf("%d",&N);
	for(int i=0; i<N; i++)
	{
		scanf("%d",&sc[i]);
		num[sc[i]]++;
	}
	scanf("%d",&K);
	int tmp;
	for(int i=0; i<K; i++)
	{
		scanf("%d",&tmp);
		if(i>0)
			printf(" ");
		printf("%d",num[tmp]);
	}
	
	
}
