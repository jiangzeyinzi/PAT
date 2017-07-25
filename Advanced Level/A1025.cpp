#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;
struct Stu{
	char nb[15];
	int gr;
	int loc_nb;
	int fin_rank;
	int loc_rank;
}stu[100010];
bool cmp(Stu a, Stu b)
{
	if(a.gr!=b.gr)
		return a.gr>b.gr;
	else
		return strcmp(a.nb, b.nb)<0;
}
int main()
{
	int n;
	scanf("%d",&n);
	int cnt = 0;
	int idx = 0; 
	for(int i=0; i<n; i++)
	{
		int k;
		scanf("%d",&k);
		for(int j=0; j<k; j++)
		{
			scanf("%s%d",stu[idx].nb, &stu[idx].gr);
			stu[idx].loc_nb = i+1;
			idx++;
		}
		sort(stu+cnt, stu+cnt+k, cmp);
		stu[cnt].loc_rank = 1;
		for(int j=cnt+1; j<cnt+k; j++)
		{
			if(stu[j].gr==stu[j-1].gr)
				stu[j].loc_rank = stu[j-1].loc_rank;
			else
				stu[j].loc_rank = j - cnt + 1;
		}
		cnt += k;
	}
	sort(stu, stu+cnt, cmp);
	stu[0].fin_rank = 1;
	for(int i=1; i<cnt; i++)
	{
		if(stu[i].gr==stu[i-1].gr)
			stu[i].fin_rank = stu[i-1].fin_rank;
		else
			stu[i].fin_rank = i + 1;
	}
	printf("%d\n",cnt);
	for(int i=0; i<cnt; i++)
		printf("%s %d %d %d\n",stu[i].nb, stu[i].fin_rank, stu[i].loc_nb, stu[i].loc_rank); 
	
} 
