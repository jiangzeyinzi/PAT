#include <cstdio>
double E[10010];
int main()
{
	int N,D;
	double e;
	int K;
	int mep=0, ep=0;
	scanf("%d%lf%d",&N,&e,&D);
	for(int i=0; i<N; i++)
	{
		scanf("%d",&K);
		int cnt = 0;
		for(int j=0; j<K; j++)
		{
			scanf("%lf",&E[j]);
			if(E[j]<e)
				cnt++;
		}
		//printf("cnt=%d\n",cnt);
		if(cnt > K/2)
		{
			if(K>D)
				mep++;	
			else
				ep++;
		}
	}
	printf("%.1f%% %.1f%%", (double)ep/N*100,(double)mep/N*100);
}
