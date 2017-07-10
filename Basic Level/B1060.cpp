#include <cstdio>
#include <algorithm>
using namespace std;
int num[100010];
bool cmp(int a, int b)
{
	return a>b;
}
int main()
{
	int N;
	scanf("%d",&N);
	for(int i=1; i<=N; i++)
	{
		scanf("%d",&num[i]);
	}
	sort(num, num+N, cmp);
	int E=0;
	for(int i=1; i<=N; i++)
	{
		if(num[i]>E)
		{
			E = i;
		}
		else
			break;
	}
	printf("%d",E);
}
