#include <cstdio>

int main()
{
	int N;
	int sum=0;
	scanf("%d",&N);
	int tmp;
	for(int i=0; i<N; i++)
	{
		scanf("%d",&tmp);
		sum += tmp*11*(N-1);
	}
	printf("%d",sum);
}
