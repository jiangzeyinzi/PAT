#include <cstdio>

int num[10];
int n1[30];
int n2[30];
int Double(int num[], int n)
{
	int len = 0;
	int up = 0;
	for(int i=n-1; i>=0; i--)
	{
		n2[len++] = (num[i]*2 + up)%10;
		if(num[i]*2>9)
			up = 1;
		else
			up = 0;
	}
	if(up==1)
		n2[len++] = 1;
	return len;
}
bool isRight(int n2[], int len2, int len1)
{
	if(len2 != len1)
		return false;
	int a[10]={0};
	for(int i=0; i<len2; i++)
	{
		a[n2[i]]++;
	}
	for(int i=0; i<10; i++)
	{
		if(a[i]!=num[i])
			return false;
	}
	return true;
}
int main()
{
	char str[30];
	gets(str);
	int n=0;
	for(int i=0; str[i]; i++)
	{
		int tmp = str[i]-'0';
		n1[i] = tmp;
		n++;
		num[tmp]++;
	}
	int len = Double(n1, n);
	int flag = isRight(n2, len, n);
	if(flag)
		printf("Yes\n");
	else
		printf("No\n");
	for(int i=len-1; i>=0; i--)
		printf("%d",n2[i]);
	
	
}
