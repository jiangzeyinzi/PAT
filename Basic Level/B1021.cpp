#include <cstdio>
#include <cstring>
char N[1010];
int num[10];
int main()
{
	gets(N);
	for(int i=0; i<strlen(N); i++)
	{
		num[N[i]-'0']++;
	}
	for(int i=0; i<10; i++)
	{
		if(num[i])
			printf("%d:%d\n",i,num[i]);
	}
}
