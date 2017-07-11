#include <cstdio>

struct Que{
	int sc;
	int ans;
}que[110];
int stu[110];
int main()
{
	int N,M;
	scanf("%d%d",&N,&M);
	for(int i=0; i<M; i++)
	{
		scanf("%d",&que[i].sc);
	}
	for(int i=0; i<M; i++)
	{
		scanf("%d",&que[i].ans);
	}
	int tmp;
	for(int i=0; i<N; i++)
	{
		for(int j=0; j<M; j++)
		{
			scanf("%d",&tmp);
			if(tmp==que[j].ans)
				stu[i] += que[j].sc;
		}
		
	}
	for(int i=0; i<N; i++)
	{
		printf("%d\n",stu[i]);
	}
}
