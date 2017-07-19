#include <cstdio>
#include <algorithm>
#include <cmath>
const int maxn = 1010;
const double eps = 1e-8;
double a[maxn];
double b[maxn];
double c[maxn];
int main()
{
	int n1,n2;
	scanf("%d",&n1);
	for(int i=0; i<n1; i++)
	{
		int tmp;
		scanf("%d",&tmp);
		scanf("%lf",&a[tmp]);
	}
	scanf("%d",&n2);
	for(int i=0; i<n2; i++)
	{
		int tmp;
		scanf("%d",&tmp);
		scanf("%lf",&b[tmp]);
	}
	int cnt = 0;
	for(int i=0; i<maxn; i++)
	{
		c[i] = a[i] + b[i];
		if(fabs(c[i])>eps)
			cnt++;
	}
	printf("%d",cnt);
	for(int i=maxn-1; i>=0; i--)
	{
		if(fabs(c[i])>eps)
			printf(" %d %.1f",i,c[i]);
	}
}
