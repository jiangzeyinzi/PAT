#include <cstdio>
#include <cstring>
char sen[100][100];

int main()
{
	char str[100];
	int k=0;
	while(scanf("%s",str)!=EOF)
	{
		strcpy(sen[k++],str);
	}
	for(int i=k-1; i>=0; i--)
	{
		if(i<k-1)
			printf(" ");
		printf("%s",sen[i]);
	}
	return 0;
}
