#include <cstdio>
int main()
{
	int N1,M1,N2,M2,K;
	scanf("%d/%d%d/%d%d",&N1,&M1,&N2,&M2,&K);
	double D1 = N1*1.0/M1;
	double D2 = N2*1.0/M2;
	int k=0;
	for(int i=1; i<K; i++)
	{
		double div = i*1.0/K;
		if(!(K%i)) 
			continue;
		if(div>D1 && div<D2)
		{
			if(k>0)
				printf(" ");
			printf("%d/%d",i,K);
			k++;
		}
	}		
}
