#include <cstdio>
#include <algorithm>
using namespace std;
const int maxn = 110;
int num1[maxn];
int num2[maxn];
int snum[maxn];
int ins[maxn][maxn];
int mer[maxn][maxn];
bool isSame(int a[], int b[], int n)
{
	for(int i=0; i<n; i++)
	{
		if(a[i]!=b[i])
			return false;
	}
	return true;
}
int insertSort(int num[], int n)
{
	int m = 0;
	for(int i=1; i<n; i++)
	{
		int j = i;
		while(j>0 && num[j]<num[j-1])
		{
			int tmp = num[j];
			num[j] = num[j-1];
			num[j-1] = tmp;
			j--;
		}
		for(int k=0; k<n; k++)
			ins[m][k] = num[k];
		m++;
	}
	return m;
}
int mergeSort(int num[], int n)
{
	int m = 0;
	for(int step=2; step/2<=n; step*=2)
	{
		for(int i=0; i<n; i+=step)
		{
			int mid = i + step/2-1;
			sort(num+i, num+min(i+step, n));
		}
		for(int k=0; k<n; k++)
			mer[m][k] = num[k];
		m++;
	}
	return m;
}
int main()
{
	int N;
	scanf("%d",&N);
	for(int i=0; i<N; i++)
	{
		scanf("%d",&num1[i]);
		num2[i] = num1[i];
	}
	for(int i=0; i<N; i++)
	{
		scanf("%d",&snum[i]);
	}
	
	int n1 = insertSort(num1,N);
	for(int i=0; i<n1-1; i++)
	{
		if(isSame(snum, ins[i], N))
		{
			printf("Insertion Sort\n");
			for(int j=0; j<N; j++)
			{
				if(j>0)
					printf(" ");
				printf("%d",ins[i+1][j]); 
			}
		}
	}
	
	int n2 = mergeSort(num2, N);
	for(int i=0; i<n2-1; i++)
	{
		if(isSame(snum,mer[i], N))
		{
			printf("Merge Sort\n");
			for(int j=0; j<N; j++)
			{
				if(j>0)
					printf(" ");
				printf("%d",mer[i+1][j]);
			}
		}
	}
	return 0;
	
}
