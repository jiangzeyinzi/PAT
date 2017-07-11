#include <cstdio>
#include <set>
#include <algorithm>
using namespace std;
int per[100010];
set <int> sig;
int party[10010];
bool cmp(int a, int b)
{
	return per[a]<per[b];
}
int main()
{
	int N,M;
	scanf("%d",&N);
	int a, b;
	for(int i=1; i<=N; i++)
	{
		scanf("%d%d",&a, &b);
		per[a] = i;
		per[b] = i;
	}
	scanf("%d",&M);
	
	for(int i=0; i<M; i++)
	{
		scanf("%d",&party[i]);
		if(!per[party[i]])
			per[party[i]] = N+i;
	}
	sort(party, party+M, cmp);
	for(int i=0; i<M; i++)
	{
		if(per[party[i]]==per[party[i+1]])
			i++;
		else
			sig.insert(party[i]);
	}
	for(set<int>::iterator it=sig.begin(); it!=sig.end(); it++)
	{
		if(it!=sig.begin())
			printf(" ");
		else
			printf("%d\n",sig.size());
		printf("%d",*it);
	}
}
