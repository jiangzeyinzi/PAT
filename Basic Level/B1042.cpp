#include <cstdio>
#include <cstring>
int num[26];
char str[1010];
int main()
{
	gets(str);
	int tmp;
	for(int i=0; i<strlen(str); i++)
	{
		int tmp=0;
		if(str[i]>='a' && str[i]<='z')
			tmp = str[i]-'a';
		else if(str[i]>='A' && str[i]<='Z')
			tmp = str[i]-'A';
		else
			continue;
		num[tmp]++;
	}
	int max=0;
	int k=0;
	for(k=0; k<26; k++)
	{
		//printf("%d ",num[k]);
		if(num[k]>num[max])
			max = k;
	}
	printf("%c %d",max+'a',num[max]);
	
}
