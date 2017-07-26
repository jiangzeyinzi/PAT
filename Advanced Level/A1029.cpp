#include <cstdio>
const int maxn = 1000010;
int n, m;
long long a[maxn], b[maxn], c[maxn];
void merge()
{
	int len = 0;
	int i=0, j=0;
	while(i<n && j<m)
	{
		if(a[i]<=b[j])
			c[len++] = a[i++];
		else
			c[len++] = b[j++]; 
	}
	while(i<n) c[len++] = a[i++];
	while(j<m) c[len++] = b[j++];
}
int main()
{
	scanf("%d",&n);
	for(int i=0; i<n; i++)
		scanf("%lld",&a[i]);
	scanf("%d",&m);
	for(int i=0; i<m; i++)
		scanf("%lld",&b[i]);
	merge();
	//for(int i=0; i<n+m; i++)
	//	printf("%d ", c[i]);
	printf("%lld",c[(n+m-1)/2]);
}
