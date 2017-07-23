#include <cstdio>
#include <cmath>
const int MAXN = 1010;
const double Eps = 1>>30;
double a[MAXN], b[MAXN], ans[2*MAXN];

int main()
{
	int n,m; 
	int tmp;
	scanf("%d",&n);
	for(int i=0; i<n; i++)
	{
		scanf("%d",&tmp);
		scanf("%lf",&a[tmp]);
	}	
	scanf("%d",&m);
	for(int i=0; i<m; i++)
	{
		scanf("%d",&tmp);
		scanf("%lf",&b[tmp]);
	}
	int cnt=0; 
	for(int i=0; i<MAXN; i++)
	{
		for(int j=0; j<MAXN; j++)
		{
			ans[i+j] += a[i]*b[j];
		}
	}
	for(int i=MAXN*MAXN-1; i>=0; i--)
	{
		if(fabs(ans[i])>Eps)
			cnt++;
	}
	printf("%d",cnt);
	for(int i=MAXN*MAXN-1; i>=0; i--)
	{
		if(fabs(ans[i])>Eps)
			printf(" %d %.1f", i, ans[i]);
	}
	return 0;
} 
