#include <cstdio>
#include <algorithm>
using namespace std;
int num[10010];
int main()
{
	int N;
	scanf("%d",&N);
	for(int i=0; i<N; i++)
	{
		scanf("%d",&num[i]);
	}
	sort(num, num+N);
	int sum = num[0];
	for(int i=1; i<N; i++)
	{
		sum = (sum + num[i])/2;
	}	
	printf("%d",sum);
}
