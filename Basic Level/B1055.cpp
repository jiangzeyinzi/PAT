#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;
struct Stu{
	char name[12];
	int height;
}stu[10010];
int cnt=1;
bool cmp(Stu a, Stu b)
{
	if(a.height!=b.height)
		return a.height>b.height;
	else
		return strcmp(a.name,b.name)<0;
}
void order(Stu a[], int left, int right)
{
	char tmp[10010][12];
	int m = right-left+1;
	int i = m/2+1, j = m/2+1;
	int k=0;
	strcpy(tmp[i],a[left++].name);
	while(left<=right)
	{
		if(i>=1)
			strcpy(tmp[--i],a[left++].name);
		if(j<=m)
			strcpy(tmp[++j],a[left++].name);
	}
	for(int i=1; i<=m; i++)
	{
		if(i>1)
			printf(" ");
		printf("%s",tmp[i]);
	}
	printf("\n");
}

int main()
{
	int N, K;
	scanf("%d%d",&N,&K);
	for(int i=1; i<=N; i++)
	{
		scanf("%s%d",stu[i].name, &stu[i].height);
	}
	sort(stu+1, stu+N+1, cmp);
	//for(int i=0; i<N; i++)
	//	printf("%s %d\n",stu[i].name, stu[i].height);
	int mdown = N/K;
	int mup = N - mdown * (K-1);
	//printf("%d %d\n",m,mtop);
	order(stu, 1, mup);
	for(int i=0; i<K-1; i++)
	{
		order(stu, mup+i*K+1 , mup+i*K+mdown);
	}
} 
