#include <cstdio>
#include <cmath>
int isPrime(int num)
{
	for(int i=2; i<=sqrt(num); i++)
	{
		if(num%i==0)
			return 0;
		else
			continue;
	}
	return 1;
}

int main()
{
	int n;
	int num=2;
	int cnt=0;
	scanf("%d",&n);
	while(num<=n)
	{
		if(isPrime(num) && isPrime(num+2) && (num+2)<=n)
		{
			cnt++;
			num += 2;
		}
		else
		{
			num++;
		}
	}
	printf("%d\n",cnt);
	return 0;
}
