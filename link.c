#include<stdio.h>
#include<stdlib.h>
#define NEWNODE (struct node*) malloc(sizeof(struct node))

struct node 
{
	int data;
	struct node *next;
};


int main()
{

	struct node *p;

	p = NEWNODE;
	p->data = 10;
	p->next = NULL;
	
	p->next = NEWNODE;
	p->next->data =20;
	p->next->next = NULL;

	p->next->next = NEWNODE;
	p->next->next->data =30;
	p->next->next->next = NULL;

	p->next->next->next= NEWNODE;
	p->next->next->next->data =40;
	p->next->next->next->next = NULL;

	p->next->next->next->next= NEWNODE;
	p->next->next->next->next->data =50;
	p->next->next->next->next->next = NULL;

	printf("%d \n", p->data);
	printf("%d \n", p->next->data);
	printf("%d \n", p->next->next->data);
	printf("%d \n", p->next->next->next->data);
	printf("%d \n", p->next->next->next->next->data);


	return 0;
}