#include <cstdio>
int ele[110];
int main()
{
	int n;
	scanf("%d",&n);
	int tmp;
	int sum = 0;
	int k = 0, up = 0, down = 0;
	for(int i=1; i<=n; i++)
	{
		scanf("%d",&tmp);
		ele[i] = tmp; 
	}
	for(int i=0; i<n; i++)
	{
		if(ele[i]<ele[i+1])
		{
			up += ele[i+1]-ele[i];
		}
		else if(ele[i]>ele[i+1])
		{
			down += ele[i] - ele[i+1];
		}
	}
	sum += n*5 + up*6 + down*4;
	printf("%d",sum);
}
