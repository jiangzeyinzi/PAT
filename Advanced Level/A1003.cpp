#include <cstdio>
#include <algorithm>
using namespace std;
const int MAXN = 510;
const int INF = (1<<30)-1;
int n,m,s,e;
int weight[MAXN];
bool vis[MAXN];
int G[MAXN][MAXN];
int d[MAXN];
int src[MAXN];
int num[MAXN];
void Dijkstra(int s)
{
	fill(d, d+MAXN, INF);
	d[s] = 0;
	src[s] = weight[s];
	num[s] = 1;
	for(int i=0; i<n; i++)
	{
		int MIN = INF, u=-1;
		for(int j=0; j<n; j++)
		{
			if(vis[j]==false && d[j]<MIN)
			{
				u = j;
				MIN = d[j];
			}
		}
		if(u==-1)
			return;
		vis[u] = true;
		for(int v=0; v<n; v++)
		{
			//printf("%d %d %d\n",u, v ,G[u][v]);
			if(vis[v]==false && G[u][v]!=INF)
			{
				if(d[v]>d[u]+G[u][v])
				{
					d[v] = d[u] + G[u][v];
					src[v] = src[u] + weight[v]; 
					num[v] = num[u];
				}
				else if(d[v]==d[u]+G[u][v])
				{
					if(weight[v]+src[u]>src[v])
						src[v] = src[u] + weight[v]; 
					num[v] += num[u];
				}	
			}
		}
	}
}
int main()
{
	scanf("%d%d%d%d",&n,&m,&s,&e);
	for(int i=0; i<n; i++)
		scanf("%d",&weight[i]);
	fill(G[0],G[0]+MAXN*MAXN,INF);
	int u, v, w;
	for(int i=0; i<m; i++)
	{
		scanf("%d%d%d",&u, &v, &w);
		G[u][v] = w;
		G[v][u] = w;
	}
	Dijkstra(s);
	printf("%d %d", num[e], src[e]);
}
