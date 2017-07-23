#include <cstdio>
#include <cmath>
#include <cstring>
#include <algorithm>
using namespace std;
const int maxn = 10010;
bool isPrime(int a)
{
	if(a<=1)
		return false;
	for(int i=2; i<=sqrt(a); i++)
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
		if(!isPrime(n))
			printf("NO\n");
		else
		{
			int s1[maxn];
			int index = 0;
			do{
				s1[index++] = n%d;
				n /= d;
			}while(n>0);
			int y = 0;
			for(int i=0; i<index; i++)
				y = y*d + s1[i]; 
			if(isPrime(y))
				printf("Yes\n");
			else
				printf("No\n");
		}
	}
}
