#include <cstdio>
#include <cstring>
const int maxn = 100010;
char str[maxn];
long long cnt=0;
int a[maxn];
int left[maxn];
int right[maxn];
int main()
{
	gets(str);
	int len = strlen(str);
	int numa = 0;
	for(int i=0; i<len; i++)
	{
		if(str[i]=='A' && i>0 && i<len)
			a[numa++] = i;
	}
	for(int i=0; i<len; i++)
	{
		if(i>0)
			left[i] = left[i-1];
		if(str[i]=='P')
			left[i]++;	
	}
	for(int i=len-1; i>=0; i--)
	{
		if(i<len-1)
			right[i] = right[i+1];
		if(str[i]=='T')
			right[i]++;
	}
	for(int i=0; i<numa; i++)
	{
		int j = a[i];
		cnt += left[j]*right[j];  
	}
	
	printf("%d",cnt%1000000007);
}
