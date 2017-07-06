#include <cstdio>
#include <cstdlib>
int main()
{
	int G1,S1,K1,G2,S2,K2;
	scanf("%d.%d.%d %d.%d.%d",&G1,&S1,&K1,&G2,&S2,&K2);
	int sum1 = G1*17*29+S1*29+K1;
	int sum2 = G2*17*29+S2*29+K2;
	int dif = abs(sum1-sum2);
	if(sum1<sum2)
	{
		printf("%d.%d.%d",dif/17/29,dif/29%17,dif%29);
	}
	else if(sum1>sum2)
	{
		printf("-%d.%d.%d",dif/17/29,dif/29%17,dif%29);
	}
	else
		printf("0.0.0");
	
}
