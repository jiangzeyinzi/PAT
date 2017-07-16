#include <cstdio>
#include <cmath>
#include <cstring>
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
	//printf("\n");
	int m=0, n=0;
	for(int i=1; i<=sqrt(N); i++)
	{
		if(N%i==0)
			n = i;
	}
	m = N/n;
	//printf("\n%d %d \n",m,n);
	int k = 0;
	int i=0, j=0;
	mat[i][j] = arr[k++];
	while(k<N)
	{
		while(j+1<n && !mat[i][j+1])
			mat[i][++j] = arr[k++];
		while(i+1<m && !mat[i+1][j])
			mat[++i][j] = arr[k++];
		while(j-1>=0 && !mat[i][j-1])
			mat[i][--j] = arr[k++];
		while(i-1>=0 && !mat[i-1][j])
			mat[--i][j] = arr[k++];
	}
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
		{
			if(j>0)
				printf(" ");
			printf("%d",mat[i][j]);
		}
		printf("\n");
	}
	
	
}
