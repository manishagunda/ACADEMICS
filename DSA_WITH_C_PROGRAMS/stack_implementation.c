#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int stack[50],size,top=-1,option;
void push();
void pop();
void display();
void main()
{
	printf("\nenter size of stack\n");
	scanf("%d",&size);
	while(1)
	{
		printf("\n1.push\n");
		printf("\n2.pop\n");
		printf("\n3.display\n");
		printf("\n4.exit\n");
		printf("\nenter option\n");
		scanf("%d",&option);
		switch(option)
		{
			case 1:push();
			       break;
			case 2:pop();
			       break;
			case 3:display();
			       break;
			case 4:exit(0);
			default:
				printf("\ninvalid option");
		}
	}
}
void push()
{
	int item;
	if(top==size-1)
	{
		printf("\nstack overflow");
	}
	else
	{
		printf("\nenter value to push\n");
		scanf("%d",&item);
		top++;
		stack[top]=item;
	}
}
void pop()
{
	if(top==-1)
	{
		printf("\nstack underflow\n");
	}
	else
	{
		printf("\nthe popped element is=%d",stack[top]);
		top--;
	}
}
void display()
{
	int i;
	if(top==-1)
	{
		printf("\nstack empty");
	}
	else
	{
		for(i=top;i>=0;i--)
		{
			printf("\t%d",stack[i]);
		}
	}
}

