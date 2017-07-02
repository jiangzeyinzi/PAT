#include <cstdio>

int main()
{
	char astr[20], bstr[20];
	int a, b;
	int asum=0, bsum=0;
	scanf("%s%d%s%d",astr, &a, bstr, &b);
	//printf("-%s-%s-", astr, bstr);
	for(int i=0; astr[i]!='\0'; i++)
	{
		
		if(astr[i]==(a+'0'))
			asum = asum*10+a;
	}
	for(int i=0; bstr[i]!='\0'; i++)
	{
		if(bstr[i]==(b+'0'))
			bsum = bsum*10+b;
	}
	printf("%d",asum+bsum);
}
