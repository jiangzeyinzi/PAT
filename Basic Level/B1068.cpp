#include <cstdio>
#include <map>
#include <algorithm>
using namespace std;
const int maxn = 1010;
int mat[maxn][maxn];
map <int, int> mp;
int M,N,TOL;
int dir[8][2] = {{-1,-1},{-1,0},{-1,1},{0,-1},{0,1},{1,-1},{1,0},{1,1}};
bool judge(int x, int y)
{
	for(int i=0; i<8; i++)
	{
		int xx = x + dir[i][0];
		int yy = y + dir[i][1];
		if(xx>=0 && xx<N && yy>=0 && yy<M && abs(mat[x][y]-mat[xx][yy])<=TOL)
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
			scanf("%d",&mat[i][j]);
			mp[mat[i][j]]++;
		}		
	}
	int cnt = 0;
	int x=0, y=0, val=0;
	for(int i=0; i<N; i++)
	{
		for(int j=0; j<M; j++)
		{
			if(mp[mat[i][j]]==1 && judge(i,j))
			{
				x = i;
				y = j;
				val = mat[i][j];
				cnt++;
			}
		}
		if(cnt==2)
			break;
	}
	if(cnt==0)
		printf("Not Exist");
	else if(cnt==1)
		printf("(%d, %d): %d",y+1, x+1, val);
	else
		printf("Not Unique");
	
	
}
