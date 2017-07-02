#include <cstdio>
#include <cstring>
char date[7][4] = {"MON","TUE","WED","THU","FRI","SAT","SUN"};
char str[4][80];
int main()
{
	char week,hour,minu;
	for(int i=0; i<4; i++)
	{
		scanf("%s",str[i]);
	}
	int len1 = strlen(str[0])<strlen(str[1])?strlen(str[0]):strlen(str[1]);
	int len2 = strlen(str[2])<strlen(str[3])?strlen(str[2]):strlen(str[3]);
	int flag = 0;
	for(int i=0; i<len1; i++)
	{
		if(str[0][i]==str[1][i])
		{
			if(!flag)
			{
				if(str[0][i]>='A' && str[0][i]<='G')
				{
					week = str[0][i];
					flag = 1;
				}
			}
			else if((str[0][i]>='0'&&str[0][i]<='9')||(str[0][i]>='A'&&str[0][i]<='N'))
			{
				hour = str[0][i];
				break;
			}
		}
	}
	printf("%s ",date[week-'A']);
	
	if(hour>='0' && hour<='9')
		printf("%02d:",hour-'0');
	else
		printf("%02d:",hour-'A'+10);
	for(int i=0; i<len2; i++)
	{
		if(str[2][i]==str[3][i])
		{
			if((str[2][i]>='a'&&str[2][i]<='z')||(str[2][i]>='A'&&str[2][i]<='Z'))
			{
				printf("%02d",i);
				break;
			}
		}
	}
	
}
