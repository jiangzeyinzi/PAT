#include <cstdio>
#include <cstring>
char str[10010];
char dif[10010];
bool num[128];
int main()
{
	gets(str);
	gets(dif);
	for(int i=0; dif[i]; i++)
	{
		num[dif[i]] = true;
	}
	for(int i=0; str[i]; i++)
	{
		if(num[str[i]]!=true)
			printf("%c",str[i]);
	}
}
