#include <cstdio>
#include <algorithm>
using namespace std;
struct Stu{
	char name[10];
	int height;
}stu[10010];
bool cmp(Stu a, Stu b)
{
	if(a.height!=b.height)
		return a.height>b.height;
	else
		return a.name>b.name;
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
	for(int i=0; i<N; i++)
		printf("%s %d\n",stu[i].name, stu[i].height);
	int m = N/k;
	int mtop = N - m * (k-1);
	
} 
