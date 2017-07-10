#include <cstdio>
#include <algorithm>
using namespace std;
struct Stu{
	char name[10];
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
	int n1 = (m%2==0) ? m-1 : m-2;
	int n2 = (m%2==0) ? m-2 : m-1;
	for(int i=n1; i>0; i-=2)
	{
		printf("%s ",stu[i+n].name);
	}
	for(int i=0; i<=n2; i+=2)
	{
		if(i>0)
			printf(" ");
		printf("%s",stu[i+n].name);
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
