#include <cstdio>
#include <cstring>

char pw[30];

int main()
{
	int N;
	scanf("%s%d",pw,&N);
	char ispw[30];
	int cnt = 1;
	int flag = 0;
	getchar();
	while(strcmp(gets(ispw),"#"))
	{
		if(!flag)
		{
			if(strcmp(ispw,pw))
			{
				printf("Wrong password: %s\n",ispw);
				if(cnt==N)
				{
					printf("Account locked\n");
					flag = 1;
				}
			}
			else
			{
				printf("Welcome in\n");
				flag = 1;
			}
		}
		cnt++;
	}
}
