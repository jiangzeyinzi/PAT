#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;
const int maxn = 10010;
struct Stu{
	char name[10];
	int height;
}stu[maxn];
bool cmp(Stu a, Stu b)
{
	if(a.height!=b.height)
		return a.height>b.height;
	else
		return strcmp(a.name, b.name)<0;
}
void order(Stu a[], int left, int m)
{
	char tmp[maxn][10];
	int mid = m/2+1;
	int i=mid, j=mid;
	int k = 0;
	strcpy(tmp[mid],a[left++].name);
	while(k<m)
	{
		if(i>1)
			strcpy(tmp[--i],a[left++].name);
		if(j<m)
			strcpy(tmp[++j],a[left++].name);
		k++;
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
	int N,K;
	scanf("%d%d",&N,&K);
	for(int i=1; i<=N; i++)
		scanf("%s%d",stu[i].name,&stu[i].height);
	sort(stu+1, stu+N+1, cmp);	
	//for(int i=1; i<=N; i++)
	//	printf("%s-%d\n",stu[i].name,stu[i].height);
	int col = N/K;
	int tcol = N - col*(K-1);
	//printf("%d %d",col, tcol);
	order(stu, 1, tcol);
	for(int i=0; i<K-1; i++)
	{
		order(stu, tcol+col*i+1, col);
	}
	return 0;
}
