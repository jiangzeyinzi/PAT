#include <cstdio>
#include <cstring>
char arr[10][5] = {"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
int main()
{
	char n[110];
	gets(n);
	//printf("%s\n",n);
	//printf("%d %d %d",sizeof(n),sizeof(n[0]),strlen(n));
	int len = strlen(n);
	int num = 0;
	for(int i=0; i<len; i++)
	{
		int tmp = n[i]-'0';
		num += tmp;
		//printf("%c %d\n",n[i], tmp); S
	}
	//printf("%d", num);
	int tmp=0;
	int i=0;
	int cnum[110];
	while(num!=0)
	{
		tmp = num % 10;
		num /= 10;
		cnum[i++] = tmp;
	}
	for(int j=i-1; j>=0; j--)
	{
		if(j<i-1)
			printf(" ");
		printf("%s",arr[cnum[j]]);
	}
	return 0;
}
