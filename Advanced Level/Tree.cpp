struct node{
	int data;
	node* lchild;
	node* rchild;
};
node* newNode(int x)
{
	node* root = new node;
	root->data = x;
	root->lchild = NULL;
	root->rchild = NULL;
	return root;
}

void research(node* root, int x, int newdata)
{
	if(root==NULL)
		return;
	if(root->data==x)
	{
		root->data = newdata;
	}
	search(root->lchild, x, newdata);
	search(root->rchild, x, newdata);
}
void insert(node* root, int x)
{
	if(root==NULL)
	{
		root = newNode(x);
		return;
	}
	if(root->data>=x)
		insert(root->lchild, x);
	else
		insert(root->rchild, x);
}
node* create(int arr)
{
	node* root = NULL;
	for(int i=0; i<n; i++)
	{
		insert(root, arr[i]);
	}
	return root;
}
