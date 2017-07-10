#include <cstdio>
#include <cstring>
char str[100010];
int main()
{
	gets(str);
	int sum = 0;
	for(int i=0; i<strlen(str); i++)
	{
		if(str[i]>='a'&&str[i]<='z')
			sum += str[i]-'a'+1;
		else if(str[i]>='A'&&str[i]<='Z')
			sum += str[i]-'A'+1;
	}
	int cnt0 = 0;
	int cnt1 = 0;
	//printf("%d\n", sum);
	while(sum>0)
	{
		int tmp = sum%2;
		if(tmp==0)
			cnt0++;
		else
			cnt1++;
		sum /= 2;
	}
	printf("%d %d",cnt0, cnt1);
}
