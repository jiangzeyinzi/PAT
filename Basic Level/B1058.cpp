#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
struct Que{
	int no;
	int sc;
	int opt;
	int ropt;
	int wrong;
	char right[8];
}que[110];
int sstu[1010];
bool cmp(Que a, Que b)
{
	return a.wrong>b.wrong;
}
int main()
{
	int N,M;
	scanf("%d%d",&N,&M);
	for(int i=0; i<M; i++)
	{
		scanf("%d%d%d",&que[i].sc, &que[i].opt, &que[i].ropt);
		for(int j=0; j<que[i].ropt; j++)
		{
			getchar();
			scanf("%c",&que[i].right[j]);
		}
		que[i].no = i+1;
		que[i].right[que[i].ropt] = '\0';
		que[i].wrong = 0;
		//printf("\n%d %d %d %c\n",que[i].sc, que[i].opt, que[i].ropt, que[i].right[1]);
	}
	int chose;
	for(int i=0; i<N; i++)
	{
		for(int j=0; j<M; j++)
		{
			char option[8];
			getchar();
			scanf("(%d",&chose);
			for(int k=0; k<chose; k++)
			{
				getchar();
				scanf("%c",&option[k]);
			}
			scanf(")");
			option[chose] = '\0';
			if(!strcmp(option, que[j].right))
			{
				sstu[i] += que[j].sc;
			}
			else
			{
				que[j].wrong++;
			}
		}
	}
	for(int i=0; i<N; i++)
		printf("%d\n",sstu[i]);
	sort(que, que+M, cmp);
	if(que[0].wrong == 0)
		printf("Too simple");
	else
	{
		printf("%d %d",que[0].wrong,que[0].no);

		for(int i=1; i<M; i++)
		{
			if(que[0].wrong==que[i].wrong)
				printf(" %d",que[i].no);
			else
				break;
		}
	}
}
