#include <cstdio>

int main()
{
	int n;
	scanf("%d\n",&n);
	char str[100];
	int a, b;
	for(int i=0; i<n; i++)
	{
		scanf("%d %d", &a, &b);
		printf("%d %d\n",a, b);
	}
}
