#include <cstdio>
#include <cstring>
int main()
{
	int M, N, S;
	scanf("%d%d%d",&M,&N,&S);
	getchar();
	char str[30];
	int cnt = 0;
	int next = 0;
	char funt[1010][30];
	for(int i=1; i<=M; i++)
	{
		gets(str);
		if(i==S)
		{
			printf("%s\n",str);
			strcpy(funt[cnt],str);
			cnt++;
			next = i+N;
		}
		if(next == i)
		{
			for(int j=0; j<cnt; j++)
			{
				if(!strcmp(funt[j],str))
				{
					next++;
					break;
				}
			}
			if(next == i)
			{
				printf("%s\n",str);
				strcpy(funt[cnt],str);
				cnt++;
				next = i+N;
			}	
		}	
	}
	if(cnt==0)
		printf("Keep going...");
}
