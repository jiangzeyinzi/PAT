#include <cstdio>
const int maxn = (1<<30)-1;
int a[maxn];
bool isPal(int n[], int len)
{
	for(int i=0; i<=len/2; i++)
	{
		if(n[i]!=n[len-i-1])
			return false;
	}
	return true;
}
int main()
{
	int n, b;
	scanf("%d%d",&n,&b);
	int index =0;
	do
	{
		a[index++] = n%b;
		n /= b;
	}while(n!=0);
	bool flag = isPal(a,index);
	if(flag)
		printf("Yes\n");
	else
		printf("No\n");
	for(int i=index-1; i>=0; i--)
	{
		if(i<index-1)
			printf(" ");
		printf("%d",a[i]);
	}
} 
