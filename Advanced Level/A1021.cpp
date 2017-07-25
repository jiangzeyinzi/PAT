#include <cstdio>
#include <algorithm>
#include <vector>
#include <cstring>
using namespace std;
const int maxn = 10010;
vector<int> Adj[maxn];
vector<int> ans[maxn];
bool vis[maxn] = {false};
int n;
int maxdeep=0;
void DFS(int u, int depth)
{
	vis[u] = true;
	maxdeep = max(maxdeep, depth);
	for(int i=0; i<Adj[u].size(); i++)
	{
		int v = Adj[u][i];
		if(vis[v]==false)
			DFS(v, depth+1);
	}
}
int DFSTrave()
{
	int cnt = 0;
	int deep = 0;
	for(int i=1; i<=n; i++)
	{
		if(vis[i]==false)
		{
			DFS(i, 1);
			cnt++;
		}
			
	}
	return cnt;
}
int main()
{
	scanf("%d",&n);
	for(int i=1; i<=n-1; i++)
	{
		int u, v;
		scanf("%d%d",&u, &v);
		Adj[u].push_back(v);
		Adj[v].push_back(u);
	}	
	int k = DFSTrave();
	if(k!=1)
	{
		printf("Error: %d components",k);
	}
	else
	{
		int d = 0;
		for(int i=1; i<=n; i++)
		{
			maxdeep=0;
			memset(vis, false, sizeof(vis));
			DFS(i, 1);
			ans[maxdeep].push_back(i);
			if(d<maxdeep)
			{
				d = maxdeep;
			}
		}
		for(int i=0; i<ans[d].size(); i++)
			printf("%d\n",ans[d][i]);
	}
}
