#include <cstdio>
#include <algorithm>
using namespace std;

const int MAXN = 100010;
struct Student{
	int no;
	int de;
	int cai;
	int sc;
}stu,per[4][MAXN];

bool cmp(Student a, Student b)
{
	if(a.sc!=b.sc)
		return a.sc > b.sc;
	else if(a.de!=b.de)
		return a.de > b.de;
	else
		return a.no < b.no;
}
int main()
{
	int N, L, H;
	scanf("%d%d%d",&N,&L,&H);
	int no=0, de=0, cai=0;
	int n[4]={0};
	for(int i=0; i<N; i++)
	{
		scanf("%d%d%d",&no,&de,&cai);
		stu.no = no;
		stu.de = de;
		stu.cai = cai;
		stu.sc = de+cai;
		if(de>=H && cai>=H)
			per[0][n[0]++] = stu;
		else if(de>=H && cai>=L)
			per[1][n[1]++] = stu;
		else if(de>=L && cai>=L && de>=cai)
			per[2][n[2]++] = stu;
		else if(de>=L && cai>=L)
			per[3][n[3]++] = stu;
	}
	printf("%d\n",n[0]+n[1]+n[2]+n[3]);
	for(int i=0; i<4; i++)
	{
		sort(per[i],per[i]+n[i],cmp);
		for(int j=0; j<n[i]; j++)
		{
			printf("%d %d %d\n",per[i][j].no, per[i][j].de, per[i][j].cai);
		}
	}
	
}
