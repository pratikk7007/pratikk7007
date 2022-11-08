#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
#define BOTTOM -1

int stack[SIZE];
int top;

void init()
{
	top=BOTTOM;
}
int isempty()
{
	if(top==BOTTOM)
		return 1;
	else
		return 0;
}

int isfull()
{
	if(top==SIZE-1)
		return 1;
	else
		return 0;
}

void push(int data)
{
	if(isfull())
	{
		printf("Stack is overflow!!!");
	}
	else
	{
	    top++;
	    stack[top]=data;
	}	

}

int pop()
{
	int ldata;

	if(isempty())
	{
		printf("Stack is empty");

	}
	else
	{
		ldata=stack[top];
		top--;
		return ldata;
	}

}

int peek()
{
	if(isempty())
	{
		printf("Satck is empty!!!");
	}
	else
	{
		return stack[top];
	}
}

void display_stack()
{
	int i;
	for(i=0; i<=top; i++)
    {
       printf(" %d ", stack[i]);
    }
    printf("\n");
}

int main()
{
	int data;
	int choice;
	

	init();
    while(1)
    {
	    printf("MENU \n");
        printf("------------- \n");
        printf("1. PUSH \n");
        printf("2. POP \n");
        printf("3. PEEK \n");
        printf("4. Display Stack \n");
        printf("5. EXIT \n");
        printf("What is Your choice : ");
        scanf("%d", &choice);

    switch(choice)
    {
    	case 1:
    	        if( isfull())
                {
                    printf("\n***** STACK is FULL *******\n");
                }
                else
                {
                    printf("Enter Data :");
                    scanf("%d", &data);
                    push(data);
                }
                break;
        case 2:
                if(isempty())
                {
                     printf("\n***** STACK is EMPTY !!! ******\n");
                }
                else
                {
                    printf("Popped Element : %d \n",pop() );
                }
                  break;
        case 3:

                if(isempty())
                {
                    printf("\n***** STACK is EMPTY !!! ******\n");
                }
                else
                {
                    printf("Peeked Element : %d \n",peek() );
                }
                break;
        case 4:
                if(isempty())
                {
                    printf("\n***** STACK is EMPTY !!! ******\n");
                }
                else
                {
                    display_stack();
                } 
                break;
        case 5 :
                    exit(0);
        default:
                    printf("Invalid Choice !!!");
        }//switch
    }//while

    return 0;
}


