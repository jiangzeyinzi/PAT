#include <cstdio>
#include <set>
using namespace std;
const int maxn = 100010;
int pairs[maxn];
int per[maxn];
int flag[maxn];
set <int> sig;

int main()
{
	int N;
	scanf("%d",&N);
	int a, b;
	for(int i=0; i<N; i++)
	{
		scanf("%d%d",&a,&b);
		pairs[a] = b;
		pairs[b] = a;
	}
	int M;
	int c;
	scanf("%d",&M);
	for(int i=0; i<M; i++)
	{
		scanf("%d",&c);
		per[i] = c;
		flag[c] = 1; 
	}
	for(int i=0; i<M; i++)
	{
		if(!flag[pairs[per[i]]])
			sig.insert(per[i]);
	}
	printf("%d\n",sig.size());
	for(set <int>::iterator it=sig.begin(); it!=sig.end(); it++)
	{
		if(it!=sig.begin())
			printf(" ");
		printf("%05d",*it);
	}
}
