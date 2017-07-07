#include <cstdio>
#include <cmath>
#include <algorithm>
using namespace std;
int mat[10010][10010];
int arr[10010];
bool cmp(int a, int b)
{
	return a > b;
}
int main()
{
	int N;
	scanf("%d",&N);
	for(int i=0; i<N; i++)
		scanf("%d",&arr[i]);
	sort(arr, arr+N, cmp);
	//for(int i=0; i<N; i++)
	//	printf("%d ",arr[i]);
	int m=0, n=0;
	for(int i=1; i<=sqrt(N); i++)
	{
		if(N%i==0)
			n = i;
	}
	m = N/n;
	//printf("\n%d %d \n",m,n);
	for(int i=0; i<m; i++)
	{
		for(int j=0; i<n; j++)
		{
			
		}
	}
	
}
