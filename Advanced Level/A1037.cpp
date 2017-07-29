#include <cstdio>
#include <algorithm>
using namespace std;
const int maxn = 100010;
int n, m;
long long a[maxn], b[maxn];
int main()
{
	scanf("%d",&n);
	for(int i=0; i<n; i++)
		scanf("%lld",&a[i]);
	scanf("%d",&m);
	for(int i=0; i<m; i++)
		scanf("%lld",&b[i]);
	sort(a, a+n);
	sort(b, b+m);
	long long sum = 0;
	int i=0, j=0;
	while(a[i]<0 && b[j]<0 && i<n && j<m)
	{
		sum += a[i++]*b[j++];
	}
	i=n-1, j=m-1;
	while(a[i]>0 && b[j]>0 && i>=0 && j>=0)
	{
		sum += a[i--]*b[j--];
	}
	printf("%lld",sum);
}
