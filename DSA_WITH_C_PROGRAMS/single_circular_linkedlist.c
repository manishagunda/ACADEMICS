#include<stdio.h>
#include<stdlib.h>
void create();
void traverse();
void insertatbegin();
void insertatend();
void insertatspecified();
void deleteatbegin();
void deleteatend();
void deleteatspecified();
struct node
{
	int info;
	struct node *next;
};
struct node *start=NULL;

main()
{
	int ch;
	printf("1.Traverse\n2.Create\n3.Insertatbegin\n4.Insertatend\n5.Insertatspecified location\n6.Deleteatbegin\n7.Deleteatend\n8.Deleteatspecified\n9.Exit\n");
	while(1)
	{

	printf("\nEnter your choice:");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:traverse();
		       break;
		case 2:create();
		       break;
		case 3:insertatbegin();
		        break;
		case 4:insertatend();
		       break;
		case 5:insertatspecified();
		        break;
		case 6:deleteatbegin();
		       break;
		case 7:deleteatend();
		       break;
		case 8:deleteatspecified();
		       break;
	    case 9:exit(0);
	    default: printf("invalid choice");
		   }
	}
}
void traverse()
{
	struct node *temp;
	if(start==NULL)
	{
		printf("\n list is empty");
	}
	else
	{
		temp=start;
		printf("\nvalues of linked list are:");
	     do{
			printf("%d\t",temp->info);
			temp=temp->next;
		}while(temp!=start);
		
	}
}
void create()
{
	int total,index,item;
	struct node *temp,*newnode;
	if(start==NULL)
	{
		printf("\n enter the no of nodes you want to create:");
		scanf("%d",&total);
		if(total<=0)
		{
			printf("\nlist must be greater than zero");
		}
		else
		{
			temp=(struct node*)malloc(sizeof(struct node));
			printf("enter the value to keep in node:");
			scanf("%d",&item);
			temp->info=item;
			temp->next=temp;
			//temp->prev=NULL;
			start=temp;
			for(index=2;index<=total;index++)
			{
				newnode=(struct node*)malloc(sizeof(struct node));
				printf("\nenter the value to keep in node:");
				scanf("%d",&item);
				newnode->info=item;
				newnode->next=start;
				temp->next=newnode;
				temp=newnode;
			}
			printf("\n list is created");
		}
		}
			else
		{
				
			printf("\nlist is already present");
		}
	}
void insertatbegin()
{
	struct node *newnode,*temp;
	int item;
	newnode=(struct node*)malloc(sizeof(struct node));
	if(newnode==NULL)
	{
		printf("\nmemory is not allocated");
	}
	else
	{
		printf("\nenter the value to insert:");
		scanf("%d",&item);
		newnode->info=item;
		newnode->next=newnode;
	if(start==NULL)
	{
		start=newnode;
	}
	else
	{
		temp=start;
		while(temp->next!=start)
		{
			temp=temp->next;
		}
		newnode->next=start;
		start=newnode;
		temp->next=newnode;
	
	}
}
}
void insertatend()
{
	struct node *newnode,*temp;
	int item;
	newnode=(struct node*)malloc(sizeof(struct node));
	if(newnode==NULL)
	{
		printf("\nmemory is not allocated");
	}
	else
	{
		printf("\nenter the value to insert:");
		scanf("%d",&item);
		newnode->info=item;
		newnode->next=newnode;
	if(start==NULL)
	{
		start=newnode;
	}
	else
	{
		temp=start;
		while(temp->next!=start)
		{
			temp=temp->next;
		}
		temp->next=newnode;
		newnode->next=start;
	}
}
}

void insertatspecified()
{
    struct node *newnode,*temp,*ptr;
	int item,loc,count=1;
	newnode=(struct node*)malloc(sizeof(struct node));
	if(newnode==NULL)
	{
		printf("\nmemory is not allocated");
	}
	else
	{
		printf("\nenter the value to insert:");
		scanf("%d",&item);
		newnode->info=item;
		newnode->next=newnode;
	if(start==NULL)
	{
		start=newnode;
	}
	else
	{
		printf("\n enter the location at which you want to insert:");
		scanf("%d",&loc);
		temp=start;
		do
		{
			count++;
			ptr=temp;
			temp=temp->next;
		}while(temp!=start && count!=loc);
		if(temp==NULL)
		{
			printf("\n node is not present");
		}
		else
		{
			ptr->next=newnode;
			newnode->next=temp;
		}
	}
}
}
void deleteatbegin()
{
	struct node *temp,*ptr;
	if(start==NULL)
	{
		printf("list is empty");
	}
	else
	{
		temp=start;
		
		ptr=start;
		printf("deleted element is = %d",temp->info);
		while(ptr->next!=start)
		{
			ptr=ptr->next;
		}
		start=start->next;
		ptr->next=start;
		free(temp);
		return;
	}
}
void deleteatend()
{
	struct node *temp;
	struct node *ptr;
	
	if(start==NULL)
	{
		printf("list is empty");
	}
else
{
	temp=start;
	if(start->next==start)
	{
		start=NULL;
	}
	else
	while(temp->next!=start)
	{
		ptr=temp;
		temp=temp->next;
	}
		ptr->next=temp->next;
		printf("deleted element is = %d",temp->info);
		free(temp);
        return;
	
}
}
void deleteatspecified()
{
	struct node *temp,*ptr;
	int loc,count=1;
	if(start==NULL)
	{
		printf("list is empty");
	}
	else
	{
		
		printf("\nenter the location of element:");
		scanf("%d",&loc);
		temp=start;
		count=1;
		do
		{
			ptr=temp;
			count=count+1;
			temp=temp->next;
		}while(temp!=start && count!=loc);
			if(temp==start)
			{
				printf("node is not present");
			}
			else
			{
					ptr->next=temp->next;
				printf("\n the deleted element is = %d",temp->info);
				free(temp);
				return;
			}
		
	}
}
