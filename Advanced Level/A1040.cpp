#include <cstdio>
#include <cstring>
const int maxn = 1010;
char str[maxn];
int main()
{
	gets(str);
	int ans = 1;
	int len = strlen(str);
	for(int k=0; str[k]; k++)
	{
		int i = k, j = k, cnt = 1;
		while(i>0 && j<len-1)
		{
			i--;
			j++;
			if(str[i]==str[j])
				cnt+=2;
			else
				break;
		}
		if(cnt>ans)
			ans = cnt;
	}
	printf("%d",ans);
}
