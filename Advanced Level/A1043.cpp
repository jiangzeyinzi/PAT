#include <cstdio>
#include <vector>
using namespace std;
const int maxn = 1010;
struct node{
	int data;
	node* lchild;
	node* rchild;
};
int n;
vector<int> arr;
vector<int> pre;
vector<int> post;
vector<int> mir;
node* newNode(int x)
{
	node* Node = new node;
	Node->data = x;
	Node->lchild = Node->rchild = NULL;
	return Node;
}
void insert(node* &root, int x)
{
	if(root==NULL)
	{
		root = newNode(x);
		return;
	}
	if(x<root->data)
		insert(root->lchild, x);
	else
		insert(root->rchild, x);
}
node* create(vector<int> arr)
{
	node* root = NULL;
	for(int i=0; i<n; i++)
	{
		insert(root, arr[i]);
	}
	return root;
}
void preOrder(node* root)
{
	if(root==NULL)
		return;
	pre.push_back(root->data);
	preOrder(root->lchild);
	preOrder(root->rchild);
	
}
void postOrder(node* root)
{
	if(root==NULL)
		return;
	postOrder(root->lchild);
	postOrder(root->rchild);
	post.push_back(root->data);
}
void mirOrder(node* root)
{
	if(root==NULL)
		return;
	mir.push_back(root->data);
	mirOrder(root->rchild);
	mirOrder(root->lchild);
}

int main()
{
	scanf("%d",&n);
	for(int i=0; i<n; i++)
	{
		int tmp;
		scanf("%d",&tmp);
		arr.push_back(tmp);
	}	
	node* root = create(arr);
	preOrder(root);
	mirOrder(root);
	if(arr==pre)
	{
		printf("YES\n");
		postOrder(root);
		for(int i=0; i<n; i++)
		{
			if(i>0)
				printf(" ");
			printf("%d",post[i]);
		}
	}
	else if(arr==mir)
	{
		printf("YES\n");
		preOrder(root);
		for(int i=n-1; i>=0; i--)
		{
			if(i<n-1)
				printf(" ");
			printf("%d",pre[i]);
		}
	}
	else
	{
		printf("NO\n");
	}
}
