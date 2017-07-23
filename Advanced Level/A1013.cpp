#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;
const int maxn = 1010;
const int INF = (1<<30)-1;
int G[maxn][maxn];
int G_cp[maxn][maxn]; 
bool vis[maxn]={false};
int n,m,k;
void DFS(int u)
{
	vis[u] = true;
	for(int v=1; v<=n; v++)
	{
		if(G_cp[u][v]!=INF && vis[v]==false)
			DFS(v);
	}
}
int TraveDFS(int G_cp[maxn][maxn], int a)
{
	int cnt =0;
	for(int i=1; i<=n; i++)
	{
		G_cp[a][i] = INF;
		G_cp[i][a] = INF;
	}
	vis[a] = true;
	for(int i=1; i<=n; i++)
	{
		if(vis[i]==false)
		{
			DFS(i);
			cnt++;
		}
	}
	return cnt-1;
}
int main()
{
	scanf("%d%d%d",&n, &m, &k);
	fill(G[0], G[0]+maxn*maxn, INF);
	int u, v;
	for(int i=1; i<=m; i++)
	{
		scanf("%d%d",&u,&v);
		G[u][v] = 1;
		G[v][u] = 1;
	}
	for(int i=1; i<=k; i++)
	{
		int tmp;
		memcpy(G_cp, G, sizeof(G));
		memset(vis,false,sizeof(vis));
		scanf("%d",&tmp);
		int ans = TraveDFS(G_cp,tmp);
		printf("%d\n",ans);
	}
} 
