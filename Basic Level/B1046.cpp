#include <cstdio>

int main()
{
	int N;
	int cnta=0,cntb=0;
	scanf("%d",&N);
	for(int i=0; i<N; i++)
	{
		int a1,a2, b1, b2;
		scanf("%d%d%d%d",&a1,&a2,&b1,&b2);
		int sum = a1+b1;
		if(a2==sum && b2!=sum)
			cntb++;
		else if(b2==sum && a2!=sum)
			cnta++;
	}
	printf("%d %d",cnta, cntb);
}
