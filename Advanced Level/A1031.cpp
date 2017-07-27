#include <cstdio>
#include <cstring>
int main()
{
	char str[110];
	gets(str);
	int len = strlen(str);
	int n1 = (len+2)/3;
	int n3 = n1;
	int n2 = len+2 - 2*n1;
	//helloworld!  4 5 4
	//printf("%d %d %d",n1, n2, n3);)   
	for(int i=0; i<n1-1; i++)
	{
		printf("%c",str[i]);
		for(int j=0; j<n2-2; j++)
			printf(" ");
		printf("%c\n",str[len-i-1]);
	}
	for(int i=0; i<n2; i++)
	{
		printf("%c",str[n1-1+i]);
	}
	return 0;
}
