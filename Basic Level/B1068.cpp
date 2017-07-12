#include <cstdio>
#include <cmath>
int num[1010][1010];
int main()
{
	int M, N, TOL;
	scanf("%d%d%d",&M,&N,&TOL);
	for(int i=1; i<=N; i++)
	{
		for(int j=1; j<=M; j++)
		{
			scanf("%d",&num[i][j]);
		}
	}
	int cnt=0;
	int x, y, val;
	for(int i=1; i<=N; i++)
	{
		for(int j=1; j<=M; j++)
		{
			int d1 = abs(num[i][j]-num[i][j-1]);
			int d2 = abs(num[i][j]-num[i][j+1]);
			int d3 = abs(num[i][j]-num[i+1][j]);
			int d4 = abs(num[i][j]-num[i+1][j+1]);
			int d5 = abs(num[i][j]-num[i+1][j-1]);
			int d6 = abs(num[i][j]-num[i-1][j]);
			int d7 = abs(num[i][j]-num[i-1][j+1]);
			int d8 = abs(num[i][j]-num[i-1][j-1]);
			if(d1>TOL && d2>TOL && d3>TOL && d4>TOL && d5>TOL && d6>TOL && d7>TOL && d8>TOL)
			{
				x = i;
				y = j;
				val = num[i][j];
				cnt++; 
			}
		}
	}
	if(cnt==0)
		printf("Not Exist\n");
	else if(cnt==1)
		printf("(%d, %d): %d\n",y,x,val);
	else 
		printf("Not Unique\n");
}
