#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;
struct Stu{
	char name[12];
	int height;
}stu[10010];
int cnt=0;
bool cmp(Stu a, Stu b)
{
	if(a.height!=b.height)
		return a.height>b.height;
	else
		return a.name>b.name;
}
void order(Stu a[], int n, int m)
{
	char tmp[10010][12];
	int i=m/2+1,j=m/2+1;
	int k=n;
	strcpy(tmp[i],a[k++].name);
	while(k-n<=m)
	{
		if(i>0)
			strcpy(tmp[--i],a[k++].name);
		if(j<=m)
			strcpy(tmp[++j],a[k++].name);
	}
	for(int i=1; i<=m; i++)
	{
		if(i>1)
			printf(" ");
		printf("%s",tmp[i]);
	}
	printf("\n");
	cnt += m;
}
int main()
{
	int N, K;
	scanf("%d%d",&N,&K);
	for(int i=0; i<N; i++)
	{
		scanf("%s%d",stu[i].name, &stu[i].height);
	}
	sort(stu, stu+N, cmp);
	//for(int i=0; i<N; i++)
	//	printf("%s %d\n",stu[i].name, stu[i].height);
	int m = N/K;
	int mtop = N - m * (K-1);
	//printf("%d %d\n",m,mtop);
	order(stu, cnt, mtop);
	for(int i=1; i<K; i++)
	{
		order(stu, cnt, m);
	}
} 
