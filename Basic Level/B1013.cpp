#include <cstdio>
#include <cmath>
int isPrime(int num)
{
	for(int i=2; i<=sqrt(num); i++)
	{
		if(!(num%i))
			return 0;
		continue;
	}
	return 1;
}

int main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	//printf("%d",isPrime(3));
	int cnt = 0;
	int k = 0;
	int i=2;
	while(cnt<=10000)
	{
		if(isPrime(i))
		{
			cnt++;
			if(cnt>=m && cnt<=n)
			{
				if(k)
				{
					if(k%10)
						printf(" ");
					else if(!(k%10))
						printf("\n");
				}
				printf("%d",i);	
				k++;
			}
		}
		i++;
	}
}
