#include <cstdio>
#include <cstdlib>
#include <cstring>
char s1[13][5] = {"tret","jan", "feb", "mar", "apr", "may", "jun", "jly", "aug", "sep", "oct", "nov", "dec"};
char s2[13][5] = {"","tam", "hel", "maa", "huh", "tou", "kes", "hei", "elo", "syy", "lok", "mer", "jou"};
char str[10];
int change(char str[])
{
	if(!strcmp(str,"tret"))
		return 0;
	else if(!strcmp(str,"jan"))
		return 1;
	else if(!strcmp(str,"feb"))
		return 2;
	else if(!strcmp(str,"mar"))
		return 3;
	else if(!strcmp(str,"apr"))
		return 4;
	else if(!strcmp(str,"may"))
		return 5;
	else if(!strcmp(str,"jun"))
		return 6;
	else if(!strcmp(str,"jly"))
		return 7;
	else if(!strcmp(str,"aug"))
		return 8;
	else if(!strcmp(str,"sep"))
		return 9;
	else if(!strcmp(str,"oct"))
		return 10;
	else if(!strcmp(str,"nov"))
		return 11;
	else if(!strcmp(str,"dec"))
		return 12;
	else if(!strcmp(str,"tam"))
		return 13;
	else if(!strcmp(str,"hel"))
		return 13*2;
	else if(!strcmp(str,"maa"))
		return 13*3;
	else if(!strcmp(str,"huh"))
		return 13*4;
	else if(!strcmp(str,"tou"))
		return 13*5;
	else if(!strcmp(str,"kes"))
		return 13*6;
	else if(!strcmp(str,"hei"))
		return 13*7;
	else if(!strcmp(str,"elo"))
		return 13*8;
	else if(!strcmp(str,"syy"))
		return 13*9;
	else if(!strcmp(str,"lok"))
		return 13*10;
	else if(!strcmp(str,"mer"))
		return 13*11;
	else if(!strcmp(str,"jou"))
		return 13*12;
}
void E2M(int n)
{
	int shi = n/13;
	int ge = n%13;
	if(shi == 0)
		printf("%s\n",s1[ge]);
	else
		printf("%s %s\n",s2[shi],s1[ge]);
}
void M2E(char str[])
{
	int len = strlen(str);
	
	if(len>3)
	{
		char shi[4],ge[4];
		strncpy(shi,str,3);
		strncpy(ge,str+4,3);
		shi[3] = '\0';
		ge[3] = '\0';
		int n1 = change(shi);
		int n2 = change(ge);X
		printf("%d\n",n1+n2);
	}		
	else
	{
		char ge[4];
		strncpy(ge,str,3);
		ge[3] = '\0';
		int n2 = change(ge);
		printf("%d\n",n2);
	}
}
int main()
{
	int N;
	scanf("%d\n",&N);
	for(int i=0; i<N; i++)
	{
		gets(str);
		if(str[0]>='0' && str[0]<='9')
		{
			E2M(atoi(str));
		}	
		else
		{
			M2E(str);
		}	
	}
}
