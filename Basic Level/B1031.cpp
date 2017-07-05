#include <cstdio>
#include <cstring>
char M[11] = {'1','0','X','9','8','7','6','5','4','3','2'};
int w[17] = {7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
int isRight(char str[])
{
	int sum=0;
	int tmp = 0;
	for(int i=0; i<17; i++)
	{
		if(str[i]>='0' && str[i]<='9')
		{
			sum += (str[i]-'0') * w[i];
		}
		else
			return 0;
	}
	int left = sum%11;
	if(M[left]==str[17])
		return 1;
	else
		return 0;
}
int main()
{
	int N;
	scanf("%d\n",&N);
	char id[20];
	int cnt=0;
	for(int i=0; i<N; i++)
	{
		gets(id);
		int flag = isRight(id);
		if(!flag)
		{
			puts(id);
			cnt++;
		}
	}
	if(!cnt)
		printf("All passed");
}
