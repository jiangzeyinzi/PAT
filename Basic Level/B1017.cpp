#include <cstdio>
#include <cstring>
#include <cmath>
int main()
{
	char A[1010];
	int B;
	scanf("%s%d",A,&B);
	int len = strlen(A);
	//printf("%s %d\n",A,B);
	int cnt = 0;
	int carr = 0;
	int tmp = 0;
	int div = 0;
	while(cnt<len)
	{
		tmp = carr * 10 + (A[cnt++]-'0');
		//printf("cnt:-%d-\n",cnt);
		if(tmp<B && tmp!=0 && carr!=0)
			continue;
		else
		{
			div = tmp / B;
			if(!((cnt==1 && len!=1) && div==0))
				printf("%d",div);
			carr = tmp%B;
		}	
	}
	printf(" %d",carr);
}
