#include <cstdio>
#include <cstring>
#include <cstdlib>
char sdown, sup;
char ldown;
char down[1010],up[1010];
int main()
{
	char num[1010];
	gets(num);
	int pos=0;
	sdown = num[pos++];
	ldown = num[pos++];
	int d=0, u=0;
	for(pos=3; pos<strlen(num); pos++)
	{
		if(num[pos]=='E')
			break;
		down[d++] = num[pos];
	}
	pos++;
	sup = num[pos++];
	for(;pos<strlen(num);pos++)
	{
		up[u++] = num[pos];
	}
	//printf("%c %c %c %s %s",sdown, sup, ldown, down, up);
	if(sdown=='-')
		printf("-");
	if(sup=='-')
	{
		printf("0.");
		int move = atoi(up);
		for(int i=1; i<move; i++)
			printf("0");
		printf("%c",ldown);
		printf("%s",down);
	}
	else if(sup=='+')
	{
		int move = atoi(up);
		int dif = move-strlen(down);
		int k=0;
		if(dif >= 0)
		{
			if(ldown!='0')
			{
				printf("%c%s",ldown,down);
			}
			else
			{
				printf("%d",atoi(down));
			}	
			for(int i=0; i<dif; i++)
				printf("0");
		}
		else
		{
			if(ldown!='0')
			{
				printf("%c",ldown);
				for(k=0; k<-dif; k++)
					printf("%c",down[k]);
				printf(".");
				for(;k<strlen(down);k++)
					printf("%c",down[k]);
			}
			else
			{
				k=0;
				if(down[k]=='0' && k<)
					k++;
				for(k=0; k<-dif; k++)
					printf("%c",down[k]);
				printf(".");
				for(;k<strlen(down);k++)
					printf("%c",down[k]);
				
			}	
		}
	}
}
