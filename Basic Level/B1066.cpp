#include <cstdio>

int main()
{
	int M,N,A,B,R;
	scanf("%d%d%d%d%d",&M,&N,&A,&B,&R);
	int tmp;
	for(int i=0; i<M; i++)
	{
		for(int j=0; j<N; j++)
		{
			scanf("%d",&tmp);
			if(j>0)
				printf(" ");
			if(tmp>=A && tmp<=B)
			{
				printf("%03d",R);
			}
			else
				printf("%03d",tmp);
		}
		printf("\n");
	}
	
}
