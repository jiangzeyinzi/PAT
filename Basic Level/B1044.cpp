#include <cstdio>
#include <cstdlib>
#include <cstring>
char s1[13][5] = {"tret","jan", "feb", "mar", "apr", "may", "jun", "jly", "aug", "sep", "oct", "nov", "dec"};
char s2[13][5] = {"","tam", "hel", "maa", "huh", "tou", "kes", "hei", "elo", "syy", "lok", "mer", "jou"};
char str[10];

void E2M(int n)
{
	int shi = n/13;
	int ge = n%13;
	if(shi == 0)
		printf("%s\n",s1[ge]);
	else
	{
		if(ge!=0)
			printf("%s %s\n",s2[shi],s1[ge]);
		else
			printf("%s\n",s2[shi]);
	}
		
}
void M2E(char str[])
{
	int len = strlen(str);
	int num = 0;
	for(int i=0; i<13; i++)
	{
		if(strstr(str, s1[i]))
		{
			num += i;
		}
	}
	for(int i=1; i<13; i++)
	{
		if(strstr(str, s2[i]))
		{
			num += i*13;
		}
	}
	printf("%d\n",num);
}
int main()
{
	int N;
	scanf("%d\n",&N);
	for(int i=0; i<N; i++)
	{
		gets(str);
		if(str[0]>='0' && str[0]<='9')
		{
			E2M(atoi(str));
		}	
		else
		{
			M2E(str);
		}	
	}
}
