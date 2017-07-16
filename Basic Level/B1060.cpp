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
	for(int i=0; i<N; i++)
	{
		scanf("%d",&num[i]);
	}
	sort(num, num+N, cmp);
	int E=0;
	for(int i=0; i<N; i++)
	{
		//printf("%d %d %d\n",i,num[i],E);
		if(num[i]>E+1)
		{
			E = i+1;
		}
		else
			break;
	}
	printf("%d",E);
}
