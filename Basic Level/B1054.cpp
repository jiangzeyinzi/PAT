#include <cstdio>
#include <cstring>
int isNum(char str[])
{
	int len = strlen(str);
	for(int i=0; i<len; i++)
	{
		`
	}
}
int main()
{
	int N;
	scanf("%d",&N);
	double sum=0.0;
	int cnt=0;
	
	for(int i=0; i<N; i++)
	{
		char str[110];
		scanf("%s",str);
		int flag = isNum(str);
		if(flag)
		{
			cnt++;
			sum += 
		}
		else
		{
			printf("ERROR: %s is not a legal number\n",str);
		}
	}
	if(!cnt)
		printf("The average of 0 numbers is Undefined\n");
	else
		printf("The average of %d numbers is %.2f",cnt,sum/cnt);
		
}
