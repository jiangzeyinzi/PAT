#include <cstdio>
#include <algorithm>
using namespace std;
const int maxn = 100010;
struct Per{
	int no;
	int sc;
}per[maxn];
struct Sch{
	int no;
	int sc;
}sch[maxn];

bool cmp(Sch a, Sch b)
{
	return a.sc>b.sc;
}
int main()
{
	int N;
	scanf("%d",&N);
	for(int i=0; i<N; i++)
	{
		scanf("%d%d",&per[i].no,&per[i].sc);
		sch[per[i].no].no = per[i].no;
		sch[per[i].no].sc += per[i].sc;
	}
	sort(sch, sch+N+1, cmp);
	printf("%d %d\n",sch[0].no,sch[0].sc);
}
