#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;
const int maxn = 100010;
struct Per{
	int id;
	char name[15];
	int gr;
}per[maxn];
int n, c;
bool cmp1(Per a, Per b)
{
	return a.id < b.id;
}
bool cmp2(Per a, Per b)
{
	if(strcmp(a.name, b.name)!=0)
		return strcmp(a.name, b.name)<0;
	else
		return a.id < b.id;
}
bool cmp3(Per a, Per b)
{
	if(a.gr!=b.gr)
		return a.gr<b.gr;
	else
		return a.id<b.id;
}
void show(Per a[])
{
	for(int i=0; i<n; i++)
		printf("%06d %s %d\n",per[i].id, per[i].name, per[i].gr);
}
int main()
{
	
	scanf("%d%d",&n,&c);
	for(int i=0; i<n; i++)
	{
		scanf("%d%s%d",&per[i].id, per[i].name, &per[i].gr);
	}
	if(c==1)
	{
		sort(per, per+n, cmp1);
	}
	else if(c==2)
	{
		sort(per, per+n, cmp2);
	}
	else if(c==3)
	{
		sort(per, per+n, cmp3);
	}
	show(per);
}
