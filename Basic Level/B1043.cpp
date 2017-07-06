#include <cstdio>
#include <cstring>
char map[6]={'P','A','T','e','s','t'};
char str[10010];
int num[6];
int main()
{
	gets(str);
	for(int i=0; i<strlen(str); i++)
	{
		if(str[i]=='P')
			num[0]++;
		else if(str[i]=='A')
			num[1]++;
		else if(str[i]=='T')
			num[2]++;
		else if(str[i]=='e')
			num[3]++;
		else if(str[i]=='s')
			num[4]++;
		else if(str[i]=='t')
			num[5]++;
	}
	while(num[0]!=0 || num[1]!=0 || num[2]!=0 || num[3]!=0 || num[4]!=0 || num[5]!=0)
	{
		if(num[0]!=0)
		{
			printf("P");
			num[0]--;
		}
		if(num[1]!=0)
		{
			printf("A");
			num[1]--;
		}	
		if(num[2]!=0)
		{
			printf("T");
			num[2]--;
		}
		if(num[3]!=0)
		{
			printf("e");
			num[3]--;
		}
		if(num[4]!=0)
		{
			printf("s");
			num[4]--;
		}
		if(num[5]!=0)
		{
			printf("t");
			num[5]--;
		}
	}
}
