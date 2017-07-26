#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
const int maxn = 510;
const int INF = (1<<30)-1;
int G[maxn][maxn];
int cost[maxn][maxn];
int d[maxn];
int ct[maxn];
int pre[maxn];
bool vis[maxn];
int n, m, st, ed;
void Dijkstra(int s)
{
	fill(d, d+maxn, INF);
	fill(ct, ct+maxn, INF);
	d[s] = 0;
	c[s] = 0;
	for(int i=0; i<n; i++)
		pre[i] = i;
	for(int i=0; i<n; i++)
	{
		int u = -1;
		int MIN = INF;
		for(int j=0; j<maxn; j++)
		{
			if(vis[j]==false && MIN>d[j])
			{
				u = j;
				MIN = d[j];
			}
		}
		if(u==-1) return;
		vis[u] = true;
		for(int v=0; v<maxn; v++)
		{
			if(vis[v]==false && G[u][v]!=INF)
			{
				if(d[v]>G[u][v]+d[u])
				{
					d[v]=G[u][v]+d[u];
					ct[v]=cost[u][v]+ct[u];
					pre[v] = u;
				}
				else if(d[v]==G[u][v]+d[u])
				{
					if(ct[v]>cost[u][v]+ct[u])
					{
						ct[v] = cost[u][v]+ct[u];
						pre[v] = u;
					}
				}
			}
		}
	}	
}
void DFS(int pre[], int ed)
{
	if(ed==st)
	{
		printf("%d ",pre[ed]);
		return;
	}
	DFS(pre, pre[ed]);
	printf("%d ",ed);
}
int main()
{
	scanf("%d%d%d%d",&n, &m, &st, &ed);
	fill(G[0], G[0]+maxn*maxn, INF);
	fill(cost[0], cost[0]+maxn*maxn, INF);
	for(int i=0; i<m; i++)
	{
		int u,v,g,c;
		scanf("%d%d%d%d",&u,&v,&g,&c);
		G[u][v] = g;
		G[v][u] = g;
		cost[u][v] = c;
		cost[v][u] = c;	
	}
	Dijkstra(st);
	DFS(pre, ed);
	printf("%d %d",d[ed], ct[ed]);

}
