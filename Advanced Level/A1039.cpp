#include <cstdio>
#include <vector>
#include <set>
using namespace std;
const int maxn = 26*26*26*10+1;
set<int> stu[maxn];

int Hash(char str[])
{
	int sum = 0;
	for(int i=0; i<3; i++)
		sum = sum*26 + (str[i]-'A');
	sum = sum*10 + (str[3]-'0');
	return sum;
}
int main()
{
	int n, k;
	char name[5];
	scanf("%d%d",&n, &k);
	for(int i=0; i<k; i++)
	{
		int nn, kk;
		scanf("%d%d",&nn, &kk);
		for(int j=0; j<kk; j++)
		{
			scanf("%s",name);
			int id = Hash(name);
			stu[id].insert(nn);
		}
	}
	for(int i=0; i<n; i++)
	{
		scanf("%s",name);
		int id = Hash(name);
		int cnt = stu[id].size();
		printf("%s %d",name, cnt);
		for(set<int>::iterator it=stu[id].begin(); it!=stu[id].end(); it++)
		{
			printf(" %d", *it);
		}
		printf("\n");
	}
}
