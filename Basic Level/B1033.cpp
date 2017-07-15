#include <cstdio>
#include <cstring>
int down[256];
char s1[100];
char s2[100010];
int main()
{
	gets(s1);
	gets(s2);
	for(int i=0; i<strlen(s1); i++)
	{
		int tmp = s1[i];
		down[tmp] = 1;
		if(tmp>='A' && tmp<='Z')
			down[tmp+32]=1;	
	}
	for(int i=0; i<strlen(s2); i++)
	{
		char ch = s2[i];
		int tmp = ch;
		if(down[tmp]!=1)
		{
			if((down['+']==1) && (ch>='A'&&ch<='Z'))
				continue;
			else
				printf("%c",ch);
		}	
	}
}
