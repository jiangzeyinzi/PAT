#include <cstdio>
#include <cmath>

int main()
{
	int N;
	scanf("%d",&N);
	int a, b;
	int max = 0;
	for(int i=0; i<N; i++)
	{
		scanf("%d%d",&a,&b);
		int sum = a*a + b*b;
		if(sum > max)
			max = sum;
	}
	printf("%.2f",sqrt(max));
}
