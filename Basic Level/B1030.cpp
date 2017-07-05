#include <cstdio>
#include <algorithm>
using namespace std;

int num[100010];
int main()
{
	int N, p;
	scanf("%d%d",&N, &p);
	for(int i=0; i<N; i++)
	{
		scanf("%d",&num[i]);
	}
	sort(num, num+N);
	double div=0.0;
	int max = num[N-1];
	int min = num[0];
	int k=0;
	for(int i=N-1; i>=0; i--)
	{
		for(int j=0; j<N; j++)
		{
			
		}
	}
}
