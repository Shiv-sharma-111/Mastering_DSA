#include<bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	struct Node *next;
}*first=NULL;
void create(int A[], int n)
{
	struct Node *t, *last;
	first=new Node;
	first->data=A[0];
	first->next=NULL;
	last=first;
	for(int i=1; i<n;i++)
	{ 
		t=new Node;
		t->data=A[i];
		t->next=NULL;
		last->next=t;
		last=t;	
	}
}

void insert(struct Node *p, int val)
{
	struct Node *t =new Node;
	t->data=val;
	t->next=first;
	first=t;
	
}
void Display(struct Node *p)
{
	while(p!=NULL)
	{
		cout<<p->data<<" ";
		p=p->next;
	}
}
int main(){
	int A[]={10,20,30,40,50};
	int n=sizeof(A)/sizeof(A[0]);
	create(A,n);
	insert(first,0);
	Display(first);

	
}
