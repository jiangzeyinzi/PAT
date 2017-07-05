#include <cstdio>
#include <cstring>
int s[127];
char s1[100010];
char s2[100010];
int main()
{
	gets(s1);
	gets(s2);
	//char c1 = 'A';
	//char c2 = 'a';
	//printf("%d",c1 - c2);
	//printf("%d %d %d %d",',','.','-','+');
	for(int i=0; i<strlen(s1); i++)
	{
		char tmp = s1[i];
		if(tmp>='A' && tmp<='Z')
		{
			s[tmp]=1;
			s[tmp+32]=1;
		}
		else if(tmp>='a' && tmp<='z')
		{
			s[tmp] = 1;
			s[tmp-32] = 1;
		}
		else
			s[tmp] = 1;
	}

	for(int i=0; i<strlen(s2); i++)
	{
		char tmp = s2[i];
		if(s[tmp]!=1)
		{
			if(s[43]==1 || s[44]==1 || s[45]==1 || s[46]==1)
			{
				if(tmp>='A'&&tmp<='Z')
					continue;
				else 
					printf("%c",tmp);
			}
			else
				printf("%c",tmp);
		}	
	}
}
