#include <cstdio>
#include <cstring>
char s1[110];
char s2[110];
char ans[100];
int A[110];
int B[110];
char change(int a)
{
	a %= 13;
	if(a>=0 && a<=9)
		return a+'0';
	else if(a==10)
		return 'J';
	else if(a==11)
		return 'Q';
	else if(a==12)
		return 'K';
}
int main()
{
	scanf("%s%s",s1,s2);
	int len1 = strlen(s1);
	int len2 = strlen(s2);
	int len = len1 > len2 ? len1 : len2;	
	int m=0;
	if(len1>len2)
	{
		m=0;
		for(int i=0; i<len1-len2; i++)
			B[m++] = 0;
		for(int i=0; i<len2; i++)
		{
			int tmp = s2[i]-'0';
			B[m++] = tmp;	
		}
		for(int i=0; i<len1; i++)
		{
			int tmp = s1[i]-'0';
			A[i] = tmp;
		}
	}
	else
	{
		m=0;
		for(int i=0; i<len2-len1; i++)
			A[m++] = 0;
		for(int i=0; i<len2; i++)
		{
			int tmp = s1[i]-'0';
			A[m++] = tmp;	
		}
		for(int i=0; i<len2; i++)
		{
			int tmp = s2[i]-'0';
			B[i] = tmp;
		}
	}
	
	int k=0;
	/*
	for(int i=0; i<len; i++)
		printf("%d",A[i]);
	printf("\n");
	for(int i=0; i<len; i++)
		printf("%d",B[i]);
	printf("\n");
	*/
	int cnt = len;
	for(int i=0; i<len; i++,cnt--)
	{
		if(cnt%2==1)
		{
			ans[k++] = change(A[i]+B[i]);
			printf("%c",ans[k-1]);
		}
		else
		{
			ans[k++] = (B[i]-A[i]+10)%10+'0';
			printf("%c",(B[i]-A[i]+10)%10+'0');
		}
		
	}
}
