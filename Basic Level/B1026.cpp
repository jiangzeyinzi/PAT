#include <cstdio>
#include <cmath>
int main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	double dif = (m-n)/100.0;
	int time = (int)(dif+0.5)>(int)dif ? (int)(dif+1):(int)dif;
	printf("%02d:%02d:%02d",time/3600,time/60%60,time%60);
}
