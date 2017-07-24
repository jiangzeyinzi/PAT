#include <cstdio>
#include <queue>
using namespace std;
int n;
const int maxn = 50;
struct Node{
	int data;
	int lchild, rchild;
}node[maxn];
int in[maxn];
int post[maxn];

int create(int L1, int R1, int L2, int R2)
{
	if(L1>R1)
		return -1;
	int root = R1;
	node[root].data = post[R1];
	int k;
	for(k=L2; k<R2; k++)
	{
		if(post[root]==in[k])
			break;
	}
	int numLeft = k - L2;
	node[root].lchild = create(L1, L1+numLeft-1, L2, k-1);
	node[root].rchild = create(L1+numLeft, R1-1, k+1, R2);
	return root;
}
void layerOrder(int root)
{
	int cnt = 0;
	queue<int> q;
	q.push(root);
	while(!q.empty())
	{
		int now = q.front();
		if(cnt>0)
			printf(" ");
		printf("%d",node[now].data);
		cnt++;
		q.pop();
		if(node[now].lchild!=-1)
			q.push(node[now].lchild);
		if(node[now].rchild!=-1)
			q.push(node[now].rchild);
	}
}
int main()
{
	scanf("%d",&n);
	for(int i=0; i<n; i++)
		scanf("%d",&post[i]);
	for(int i=0; i<n; i++)
		scanf("%d",&in[i]);
	int root = create(0, n-1, 0, n-1);
	layerOrder(root);
	return 0;
}
