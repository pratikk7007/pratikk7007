#include<stdio.h>
#include<stdlib.h>
#define NEWNODE (struct node *)malloc(sizeof(struct node))

struct node
{
	int data;
	struct node *next;
};

struct node *createsll(int n)
{
	struct node *t,*f,*l;
	int i;

	f=NEWNODE;
	printf("Enter data:");
	scanf("%d",&f->data);

	l=f;

	for(i=2;i<=n;i++)
	{
		t=NEWNODE;
		printf("enter data:");
		scanf("%d",&t->data);
		l->next=t;
		l=l->next;
	}
	l->next=NULL;
	return f;
}

void display(struct node *f)
{
	struct node *t;
	printf("Linked list is:");
	for(t=f;t!=NULL;t=t->next)
	{
		printf("%d-> ",t->data);
	}
	printf("NULL");
	printf("\n");
}
struct node * eraseall(struct node *f)
{
	struct node *t;
	printf("Memory is free!!!");

	t=f;
	for(t=f;t!=NULL;t=t->next)
	{
		f=f->next;
		free(t);
		t=f;
	}
	printf("\n");
	return f;

}

struct node *addfirst(struct node *f)
{
	struct node *t;
	t=NEWNODE;
	printf("Enter the data to add at first node:");
	scanf("%d",&t->data);
	t->next=f;
	f=t;
	return f;
}

struct node *addlast(struct node *f)
{
	struct node *t,*l;
	t=NEWNODE;
	printf("enter data to add in last node:");
	scanf("%d",&t->data);
	t->next=NULL;
    if(f==NULL)
    {
    	return t;
    }
    else
    {
	     for(l=f;l->next!=NULL;l=l->next)
	    {

	    }
	
	   l->next=t;
	   return f;
    }
}

int main()
{
	int n;
	struct node *head=NULL;
	printf("How many nodes:");
	scanf("%d",&n);

	head=createsll(n);
	display(head);
	head=addfirst(head);
	display(head);
	head=addlast(head);
	display(head);
	head=eraseall(head);
	return 0;
}