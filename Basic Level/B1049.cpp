#include <cstdio>
double arr[100010];
int main()
{
	int N;
	scanf("%d",&N);
	for(int i=0; i<N; i++)
	{
		scanf("%lf",&arr[i]);
	}
	double sum=0.0;
	for(int i=0; i<N; i++)
	{
		sum +=  arr[i] * (N-i)*(i+1) ;
	}
	printf("%.2f",sum);
}
