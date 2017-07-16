#include <cstdio>
#include <algorithm>
#include <cstring>
#include <map>
using namespace std;
int dir[8][2] = {-1,-1,-1,0,-1,1,0,-1,0,1,1,-1,1,0,1,1};
map <int, int> mp;
int num[1010][1010];
int M, N, TOL;
bool judge(int x, int y)
{
	for(int i=0; i<8; i++)
	{
		int xx = x + dir[i][0];
		int yy = y + dir[i][1];
		if(xx>=0 && xx<N && yy>=0 && yy<M && abs(num[xx][yy]-num[x][y]<=TOL))
			return false;
	}
	return true;
}
int main()
{
	scanf("%d%d%d",&M,&N,&TOL);
	for(int i=0; i<N; i++)
	{
		for(int j=0; j<M; j++)
		{
			scanf("%d",&num[i][j]);
			mp[num[i][j]]++;
		}
	}
	int cnt = 0;
	int x, y;
	for(int i=0; i<N; i++)
	{
		for(int j=0; j<M; j++)
		{
			if(mp[num[i][j]]==1 && judge(i,j))
			{
				cnt++;
				x = i;
				y = j;
				printf("test");
			}
		}
	}
	if(cnt==0)
		printf("Not Exist\n");
	else if(cnt==1)
		printf("(%d, %d): %d\n",y,x,num[x-1][y-1]);
	else 
		printf("Not Unique\n");
}
