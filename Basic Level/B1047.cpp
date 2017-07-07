#include <cstdio>
#include <algorithm>
using namespace std;
int const maxn = 10010;
struct Team{
	int tno;
	int pno;
	int tsc;
}team[maxn];

bool cmp(Team a, Team b)
{
	return a.tsc > b.tsc;
}
int main()
{
	int N;
	scanf("%d",&N);
	for(int i=0; i<N; i++)
	{
		int tno, pno, psc;
		scanf("%d-%d%d",&tno,&pno,&psc);
		team[tno].tno = tno;
		team[tno].pno = pno;
		team[tno].tsc += psc;
	}
	sort(team, team+maxn, cmp);
	printf("%d% d",team[0].tno, team[0].tsc);
}
