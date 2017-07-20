struct node{
	typename data;
	node* lchild;
	node* rchild;
};
node* newNode()
{
	node* Node = new node;
	Node->data = v;
	Node->lchild = Node->rchild = NULL;
	return Node;
}
void search(node* root , int x, int newdata)
{
	if(root==NULL)
		return;
	if(root->data==x)
		root->data = newdata;
	search(root->lchild, x, newdata);
	search(root->rchild, x, newdata);
}

