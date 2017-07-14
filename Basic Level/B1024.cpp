#include <cstdio>
#include <cstring>
#include <cstdlib>
char str[10010];
char sig[3];
char integ;
char ind[5];
char dec[10010];
int main()
{
	gets(str);
	sig[0] = str[0];
	integ = str[1];
	int pos = 0;
	for(int i=3; i<strlen(str); i++)
	{	
		if(str[i]=='E')
			pos = i;
	}
	for(int i=3, j=0; i<pos; i++)
		dec[j++] = str[i];
	sig[1] = str[pos+1];
	for(int i=pos+2,j=0; i<strlen(str); i++)
		ind[j++] = str[i];
	//printf("%s %c %s %s",sig, integ, dec, ind);
	
	if(sig[0]=='-')
		printf("-");
	if(sig[1]=='-')
	{
		int move = atoi(ind)-1;
		printf("0.");
		for(int i=0; i<move; i++)
			printf("0");
		printf("%c%s",integ, dec);
	}
	else if(sig[1]=='+')
	{
		int move = atoi(ind);
		if(integ=='0')
		{
			if(move>=strlen(dec))
			{
				int d = atoi(dec);
				printf("%d",d);
				for(int i=0; i<move-strlen(dec); i++)
					printf("0");
			}
			else
			{
				int k,zero;
				for(zero=0; zero<move; zero++)
				{
					if(dec[zero]!='0')
						break;
				}
				if(zero>=move)
				{
					printf("0.");
				}
				else
				{
					for(k=zero; k<move; k++)
						printf("%c",dec[k]);
					printf(".");
				}
				
				for(k=move; k<strlen(dec); k++)
				{
					
					printf("%c",dec[k]);
				}
			}
		}
		else
		{
			if(move>=strlen(dec))
			{
				printf("%c%s",integ,dec);
				for(int i=0; i<move-strlen(dec); i++)
					printf("0");
			}
			else
			{
				int k;
				printf("%c",integ);
				for(k=0; k<move; k++)
					printf("%c",dec[k]);
				printf(".");
				for(k=move; k<strlen(dec); k++)
					printf("%c",dec[k]);
			}
		}
		
	}
}
