#include <cstdio>
#include <algorithm>
using namespace std;
const int maxn = 2010;
const int maxid = 1000010; 
struct Stu{
	int id;
	int grade[4];
}stu[maxn];
int Rank[maxid][4];
char s[4] = {'A','C','M','E'};
int now;
bool cmp(Stu a, Stu b)
{
	return a.grade[now] > b.grade[now]; 
} 
int main()
{
	int n, m;
	scanf("%d%d",&n,&m);
	for(int i=0; i<n; i++)
	{
		scanf("%d%d%d%d",&stu[i].id, &stu[i].grade[1],&stu[i].grade[2],&stu[i].grade[3]);
		stu[i].grade[0] = (stu[i].grade[1] + stu[i].grade[2] + stu[i].grade[3])/3;
	}
	for(now=0; now<4; now++)
	{
		sort(stu, stu+n, cmp);
		Rank[stu[0].id][now] = 1;
		for(int i=1; i<n; i++)
		{
			if(stu[i].grade[now] == stu[i-1].grade[now])
				Rank[stu[i].id][now] = Rank[stu[i-1].id][now];
			else
				Rank[stu[i].id][now] = i + 1;
		} 
	}
	for(int i=0; i<m; i++)
	{
		int tmp;
		scanf("%d", &tmp);
		if(Rank[tmp][0]==0)
			printf("N/A\n");
		else
		{
			int k=-1, min = maxn;
			for(int j=0; j<4; j++)
			{
				if(Rank[tmp][j]<min)
				{
					min = Rank[tmp][j];
					k = j;
				}
			}
			printf("%d %c\n",min, s[k]);
		}
	}
	
	
} 
