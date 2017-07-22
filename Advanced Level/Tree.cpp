struct node{
	typename data;
	vector child;
}Node[maxn];
int index=0;
int newNode(int v)
{
	Node[index].data = v;
	Node[index].child.clear();
	return index++;
}
void PreOrder(int root)
{
	printf("%d ",Node[root].data);
	for(int i=0; i<Node[root].child.size(); i++)
		PreOder(Node[root].child[i]);
}
void LayerOrder(int root)
{
	queue<int> Q;
	Q.push(root);
	while(!Q.empty())
	{
		int now = Q.front();
		printf("%d ",Node[now].data); 
		Q.pop();
		for(int i=0; i<Node[now].child.size(); i++)
			Q.push(Node[now].child[i]); 
	}
}
