#include <cstdio>
#include <algorithm>
#include <cstring>
#include <vector>
using namespace std;
const int maxn = 10010;

vector<int> Adj[maxn];
vector<int> ans[maxn];
bool vis[maxn] = {false};
int n;
int DFS(int u, int dep)
{
	vis[u] = true;
	int deep;
	for(int i=0; i<Adj[u].size(); i++)
	{
		int v = Adj[u][i];
		if(vis[v]==false)
		{
			deep = DFS(v, dep+1);
			printf("Adj[%d][%d]:%d \n",u,i,v);
		}
	}
	return max(deep, dep);
}
int maxdeep = 0;
int TravelDFS()
{
	int cnt = 0;
	for(int i=1; i<=n; i++)
	{
		if(vis[i]==false)
		{
			DFS(i,1);
			cnt++;
		}	
	}
	return cnt;
}
int main()
{
	scanf("%d",&n);
	int u, v;
	for(int i=1; i<=n-1; i++)
	{
		scanf("%d%d",&u,&v);
		Adj[u].push_back(v);
		Adj[v].push_back(u);
	}
	
	int k = TravelDFS();
	if(k!=1)
		printf("Error: %d components",k);
	else
	{
		for(int i=1; i<=n; i++)
		{
			memset(vis, false, sizeof(vis));
			printf("\n");
			int d = DFS(i,1);
			printf("%d- \n",d);
			ans[d].push_back(i);
			if(d>maxdeep)
				maxdeep = d;	
		}
		for(int i=0; i<ans[maxdeep].size(); i++)
			printf("%d\n",ans[maxdeep][i]);
	}
	
	return 0;
}
