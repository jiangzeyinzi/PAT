#include <cstdio>
#include <algorithm>
using namespace std;
const int maxn = 100010;
int a[maxn];
int N, p;
int binarySearch(int i)
{
	int mid;
	int left = i+1, right = N;
	long long x = (long long)a[i]*p;
	while(left<right)
	{
		mid = (left+right)/2;
		if(x>=a[mid])
			left = mid + 1;
		else
			right = mid;
	}
	return left;
}
int main()
{
	scanf("%d%d",&N, &p);
	for(int i=0; i<N; i++)
	{
		scanf("%d",&a[i]);
	}
	sort(a, a+N);
	int ans = 1;
	for(int i=0; i<N; i++)
	{
		int j = binarySearch(i);
		ans = max(ans, j-i);
	}
	printf("%d",ans);
	return 0;
}
