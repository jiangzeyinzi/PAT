#include <cstdio>

int main()
{
	int N;
	char ch;
	scanf("%d %c",&N,&ch);
	int col = int(N/2.0+0.5)>int(N/2.0) ? int(N/2.0+0.5) : int(N/2.0);
	for(int i=0; i<N; i++)
		printf("%c",ch);
	for(int i=0; i<col-2; i++)
	{
		printf("\n");
		printf("%c",ch);
		for(int j=0; j<N-2; j++)
			printf(" ");
		printf("%c",ch);
	}
	printf("\n");
	for(int i=0; i<N; i++)
		printf("%c",ch);
}
