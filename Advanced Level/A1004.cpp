#include <cstdio>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;
const int MAXN = 110;
int n, m;
struct Node{
	vector <int> child;
	int layer;
}node[MAXN];
int lay[MAXN];
int hi = 0;
void layerOrder(int root)
{
	queue<int> q;
	q.push(root);
	node[root].layer=0;
	while(!q.empty())
	{
		int now = q.front();
		int layer = node[now].layer;
		if(node[now].child.empty())
		{
			lay[layer]++;
		}
		if(hi<layer)
			hi = layer;
		q.pop();
		for(int i=0; i<node[now].child.size(); i++)
		{
			int child = node[now].child[i];
			node[child].layer = node[now].layer + 1;
			q.push(child);

		}
	} 
} 
 
int main()
{
	scanf("%d%d",&n,&m);
	for(int i=0; i<m; i++)
	{
		int t1,t2,k;
		scanf("%d%d",&t1,&k);
		for(int j=0; j<k; j++)
		{
			scanf("%d",&t2);
			node[t1].child.push_back(t2);
		}
	}
	int root = 1;
	layerOrder(root);
	for(int i=0; i<=hi; i++)
	{
		if(i>0)
			printf(" ");
		printf("%d",lay[i]);		
	}
	return 0;
}
