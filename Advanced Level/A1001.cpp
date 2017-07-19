#include <cstdio>
#include <algorithm>
int main()
{
	int a, b;
	scanf("%d%d",&a,&b);
	int sum = a+b;
	int tmp = sum;
	int num[5];
	int k=0;
	while(tmp)
	{
		num[k++] = abs(tmp%1000);
		tmp /= 1000;
	}
	if(sum<0)
		printf("-");
	else if(sum==0)
		printf("0");
	for(int i=k-1; i>=0; i--)
	{
		if(i<k-1)
			printf(",");
		if(i==k-1)
			printf("%d", num[i]);
		else
			printf("%03d", num[i]);
	}
		
}
