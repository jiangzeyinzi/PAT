#include <cstdio>

int num[10];
char str[60];
int main()
{
	int cnt=0;
	for(int i=0; i<10; i++)
	{
		scanf("%d",&num[i]);
		if(num[i])
		{
			for(int j=0; j<num[i]; j++)
			{
				str[cnt++] = i+'0';
			}
		}
	}

	int k=0;
	for(int i=0; i<cnt; i++)
	{
		if(str[i]!='0')
		{
			k=i;
			break;
		}
	}
	printf("%c",str[k]);
	for(int i=0; i<k; i++)
		printf("0");
	for(int i=k+1; i<cnt; i++)
		printf("%c",str[i]);	
}
