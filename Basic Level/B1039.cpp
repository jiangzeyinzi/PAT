#include <cstdio>
#include <cstring>
char s1[1010];
char s2[1010];
int num1[62];
int num2[62];
int change(char ch)
{
	if(ch>='0' && ch<='9')
		return ch-'0';
	else if(ch>='a' && ch<='z')
		return ch-'a'+10;
	else if(ch>='A' && ch<='Z')
		return ch-'A'+10+26;
}
int main()
{
	gets(s1);
	gets(s2);
	int tmp=0;
	for(int i=0; i<strlen(s1); i++)
	{
		tmp = change(s1[i]);
		num1[tmp]++;
	}
	for(int i=0; i<strlen(s2); i++)
	{
		tmp = change(s2[i]);
		num2[tmp]++;
	}
	int more=0;
	int less=0;
	for(int i=0; i<62; i++)
	{
		if(num1[i]<num2[i])
			less += num2[i] - num1[i];
		else if(num1[i]==num2[i])
			continue;
		else 
			more += num1[i] - num2[i];
	}
	if(less)
		printf("No %d",less);
	else
		printf("Yes %d",more);
	
}
