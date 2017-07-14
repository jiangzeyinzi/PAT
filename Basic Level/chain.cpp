#include <cstdio>

struct node{
	int data;
	node *next;
};

node *create(int arr[])
{
	node *p, *head, *pre;
	head = new node;
	head->next = NULL;
	pre = head;
	for(int i=0; i<5; i++)
	{
		p = new node;
		p->next = NULL;
		p->data = arr[i];
		pre->next = p;
		pre = p;
	}
	return head;
}
int search(node *head, int x)
{
	int cnt=0;
	node *p = head->next;
	while(p!=NULL)
	{
		if(p->data==x)
			cnt++;
		p=p->next;
	}
	return cnt;
}
node* insert(node *head, int pos, int x)   //在第pos位置插入x，指的是插入完成后第pos就是x。 
{
	node *p = head;
	
	for(int i=0; i<pos-1; i++)   //找到第pos位置的前一个节点。 
	{
		p = p->next;
	}
	node *q = new node;
	q->data = x;
	q->next = p->next;
	p->next = q;
	return head;
}
node* del(node *head, int x)
{
	node *p = head->next;
	node *pre = head;
	while(p!=NULL)
	{
		if(p->data==x)
		{
			pre->next = p->next;
			delete;
			p = pre->next;
		}
		else
		{
			pre = p;
			p = p->next;
		}

	}
}
int main()
{
	int arr[5] = {1,2,3,4,5};
	node *L = create(arr);
	node *head = L;
	L = L->next;
	while(L!=NULL)
	{
		printf("%d ",L->data);
		L = L->next;
	}
	printf("\n%d\n",search(head,2));
	
	insert(head, 3, 10);
	node *p = head->next;
	while(p!=NULL)
	{
		printf("%d ",p->data);
		p=p->next;
	}
	
	printf("\n");
	
	del(head, 2);
	p = head->next;
	while(p!=NULL)
	{
		printf("%d ",p->data);
		p=p->next;
	}
	
	return 0;
	
}
