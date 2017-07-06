#include <cstdio>
#include <cstring>
char str[100010];
long long cnt=0;
int a[100010];
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
	
	for(int i=0; i<numa; i++)
	{
		int p = 0, t = 0;
		for(int j=0; j<a[i]; j++)
		{
			if(str[j]=='P')
				p++;
		}
		for(int k=a[i]; k<len; k++)
		{
			if(str[k]=='T')
				t++;
		}
		
		cnt += p * t;
	} 
	printf("%d",cnt%1000000007);
}
