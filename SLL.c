#include<stdio.h>
#include<stdlib.h>
#define NEWNODE (struct node*) malloc (sizeof(struct node))

struct node
{
	int data;
	struct node *next;
};


struct node * createSLL(int n)
{
	struct node *f=NULL,*l=NULL,*t=NULL;
	int i;

	f=NEWNODE;
	printf("enter data:");
	scanf("%d",&f->data);

	l=f;

	for(i=2;i<=n;i++)
	{
		t=NEWNODE;
		printf("Enter data:");
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
	printf("Linked list:");

	for(t=f;t!=NULL;t=t->next)
	{
		printf(" %d->",t->data );
	}
	printf("NULL\n");
}

struct node * eraseall(struct node *f)
{
	struct node *t;
	t=f;
	while(f!=NULL)
	{
		f=f->next;
		free(t);
		t=f;
	}
	printf("\n");
	return f;
}

void evenodd(struct node *f)
{
	struct node *t;
	printf("Even data:");
	for(t=f;t!=NULL;t=t->next)
	{
		if(t->data%2==0)
		{
			printf("%d ",t->data);
		}
		

	}
	printf("\n");
	printf("Odd data:");
	for(t=f;t!=NULL;t=t->next)
	{
		if(t->data%2==1)
		{
			printf("%d ",t->data);
		}
		
	}
	printf("\n");
}

void cntposneg(struct node *f)
{
	struct node *t;
	int ncnt,pcnt;
	pcnt=0;
	ncnt=0;
	for(t=f;t!=NULL;t=t->next)
	{
		if(t->data>=0)
		{
			pcnt++;
		}
		else
		{
			ncnt++;
		}
		
	}
	printf("positive no. %d ",pcnt);
	printf("\n");
	printf("Negative no. %d ",ncnt);
}

/*void reverse(struct node *f)
{
	struct node *t;

	for(t=f;t!=NULL;t->next)
	{

	}
	printf("reverse data:");

	for(t>=f;t!=NULL;t=t->prev)
	{
		printf("%d",t->data);
	}
}*/

int main()
{
	struct node *head=NULL;
	int n;
	printf("how many nodes:-" );
	scanf("%d",&n);

	head=createSLL(n);
	display(head);
	
	evenodd(head);
	cntposneg(head);
	//reverse(head);
	head=eraseall(head);

	return 0;
}