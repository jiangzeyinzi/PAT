#include <cstdio>
struct Stu{
	char no[15];
	int test;
	int exam;
}stu[1010];
int main()
{
	int N;
	scanf("%d",&N);
	int cnt=0;
	for(int i=0; i<N; i++)
	{
		scanf("%s%d%d",stu[i].no,&stu[i].test,&stu[i].exam);
		cnt++;
	}
		
	int M;
	int test=0;
	scanf("%d",&M);
	for(int i=0; i<M; i++)
	{
		scanf("%d",&test);
		for(int j=0; j<cnt; j++)
		{
			if(test == stu[j].test)
			{
				printf("%s %d\n",stu[j].no,stu[j].exam);
				break;
			}
		}
	}
}
