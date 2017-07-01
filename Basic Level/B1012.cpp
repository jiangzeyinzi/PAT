#include <cstdio>

int Olist[5][1010];
int list[1010];

int main()
{
	int N;
	scanf("%d",&N);
	for(int i=0; i<N; i++)
	{
		scanf("%d",&list[i]);
	}
	int n1=0, n2=0, n3=0, n4=0, n5=0;
	for(int i=0; i<N; i++)
	{
		switch (list[i]%5)
		{
			case 0:
				Olist[0][n1++] = list[i];
				break;
			case 1:
				Olist[1][n2++] = list[i];
				break;
			case 2:
				Olist[2][n3++] = list[i];
				break;
			case 3:
				Olist[3][n4++] = list[i];
				break;
			case 4:
				Olist[4][n5++] = list[i];
				break;
		}
	}
		
	int sum1=0;
	for(int i=0; i<n1; i++)
	{
		if(Olist[0][i]%2==0)
			sum1 += Olist[0][i];
	}
	if(sum1==0)
		printf("N");
	else
		printf("%d",sum1);
	
	int sum2 = 0;
	for(int i=0; i<n2; i++)
	{
		if(i%2==0)
			sum2 += Olist[1][i];
		else
			sum2 -= Olist[1][i];
	}
	if(n2==0)
		printf(" N");
	else
		printf(" %d",sum2);
	
	if(n3==0)
		printf(" N");
	else 
		printf(" %d",n3);
	
	
	double sum4=0.0;
	for(int i=0; i<n4; i++)
		sum4 += Olist[3][i];
	if(n4==0)
		printf(" N");
	else
		printf(" %.1f",sum4/n4);
	
	int max=0;
	for(int i=0; i<n5; i++)
	{
		if(Olist[4][i]>max)
			max = Olist[4][i];
	}
	if(n5==0)
		printf(" N");
	else
		printf(" %d",max);	
	
}
