#include <cstdio>
int gcd(int a, int b)
{
	return !b ? a : gcd(b,a%b);
}
int main()
{
	int N1,M1,N2,M2,K;
	scanf("%d/%d%d/%d%d",&N1,&M1,&N2,&M2,&K);
	double D1 = N1*1.0/M1;
	double D2 = N2*1.0/M2;
	if(D1>D2)
	{
		double tmp = D2;
		D2 = D1;
		D1 = tmp;
	}
	int k=0;
	for(int i=0; i<1010; i++)
	{
		double div = i*1.0/K;
		if(div>D1 && div<D2)
		{
			if(gcd(i,K)==1) 
			{
				if(k>0)
					printf(" ");
				printf("%d/%d",i,K);
				k++;	
			}
		}
	}		
}
