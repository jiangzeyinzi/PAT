#include <cstdio>

struct Node{
	int data;
	int next;

}node[10010];

int main()
{
	int root, K, N;
	scanf("%d%d%d",&root,&N,&K);
	
	for(int i=0; i<N; i++)
		scanf("%d%d%d",node[i].no,node[i].data,node[i].next);
	
}
