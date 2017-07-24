#include <cstdio>
#include <cmath>
const int maxn = 111;
int s[maxn];
bool isPrime(int a)
{
	if(a<=1)
		return false;
	int sqr = (int)sqrt(1.0*a);
	for(int i=2; i<=sqr; i++)
	{
		if(a%i==0)
			return false;
	} 
	return true;
} 
int main()	
{
	int n, d;
	while(scanf("%d",&n)!=EOF)
	{
		if(n<0)
			break;
		scanf("%d",&d);
		if(isPrime(n)==false)
			printf("No\n");
		else
		{		
			int index = 0;
			do{
				s[index++] = n%d;
				n /= d;
			}while(n!=0);
			int y = 0;
			for(int i=0; i<index; i++)
				n = n*d + s[i]; 
			if(isPrime(n)==true)
				printf("Yes\n");
			else
				printf("No\n");
		}
	}
	return 0;
}
