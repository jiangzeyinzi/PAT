#include <cstdio>
const int MAXN = 110;
char str[MAXN];
char s[10][8] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
char ans[MAXN];
int main()
{
	gets(str);
	int sum = 0;
	for(int i=0; str[i]; i++)
	{
		sum += str[i]-'0';
	}
	sprintf(ans, "%d", sum);
	for(int i=0; ans[i]; i++)
	{
		if(i>0)
			printf(" ");
		printf("%s",s[ans[i]-'0']);
	}
} 
