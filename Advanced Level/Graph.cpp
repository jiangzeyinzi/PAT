struct Node{
	int v;
	int layer;
};
vector<Node> Adj[N];
inq[MAXV] = {false}; 
void BFS(int s)
{
	queue<Node> q;
	Node start;
	start.v = s;
	start.layer = 0;
	q.push(start);
	inq[start.v]=true;
	while(!q.empty())
	{
		Node TopNode = q.front();
		q.pop();
		int u = TopNode.v;
		for(int i=0; i<Adj[u].size(); i++)
		{
			Node next = Adj[u][i];
			next.layer = TopNode.layer+1;
			if(inq[next.v]==false)
			{
				q.push(next);
				inq[next.v]=true;
			}
		}
	}
}
