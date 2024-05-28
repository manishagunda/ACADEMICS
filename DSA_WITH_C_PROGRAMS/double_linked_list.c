#include<stdio.h>
#include<stdlib.h>
struct Node{
	int info;
	struct Node *prev;
	struct Node *next; 
};
struct Node *start = NULL;//creation of empty list
void create();
void traverse();
void insertatbegin();
void insertatend();
void insertatspecific();
void deleteatbegin();
void deleteatend();
void deleteatspecific();

void main()
{
	int ch;
	printf("\n 1.CREATE LIST");
	printf("\n 2.TRAVERSE");
	printf("\n 3.INSERT AT BEGIN");
	printf("\n 4.INSERT AT END");
	printf("\n 5.INSERT AT SPECIFIC");
	printf("\n 6.DELETE AT BEGIN");
	printf("\n 7.DELETE AT END");
	printf("\n 8.DELETE AT SPECIFIC");
	printf("\n 9.EXIT");
	while(1)
	{
		printf("\n\n Make your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: {create();break;}
				//create();
				//break;
			case 2:
				traverse();
				break;
			case 3:
				insertatbegin();
				break;
			case 4:
				insertatend();
				break;
			case 5:
				insertatspecific();
				break;
			case 6:
				deleteatbegin();
				break;
			case 7:
				deleteatend();
				break;
			case 8:
				deleteatspecific();
				break;
			case 9:
				exit(0);
				break;
			default:
				printf("\n Invalid choice");
				break;
		}
	}
}

void create()
{
	struct Node *newnode,*temp;
	int total,index,item;
	if(start==NULL)
	{
		
		printf("\n Enter no.of nodes:");
		scanf("%d",&total);
		if(total<=0)
		{
		printf("\n Total no.of nodes need to be Positive");
		}
		else
		{
			temp = (struct Node*)malloc(sizeof(struct Node));
			printf("\n Enter the value to keep in Node:");
			scanf("%d",&item);
			temp->info=item;
			temp->prev=NULL;
			temp->next=NULL;
			
			start = temp;
			for(index=2;index<=total;index++)
			{
				newnode = (struct Node*)malloc(sizeof(struct Node));
				printf("\n Enter the value to keep in Node:");
				scanf("%d",&item);
				newnode->info=item;
				newnode->next = NULL;
				newnode->prev=temp;
				temp->next = newnode;
				temp=newnode;
			}
		
		}
	}
	else
	{
		printf("\n LIST ALREADY EXITS");
	}
}

void traverse()
{
	struct Node *temp;
	if(start==NULL)
	{
	  printf("\n LIST IS EMPTY");	
	}
	else
	{
		temp=start;
		printf("\n The values in the List from Left to Right are:\n");
		while(temp!=NULL)
		{
			printf("%d\t",temp->info);
			temp=temp->next;
		}
		
		printf("\n The values in the List from Right to Left are:\n");
		temp=start;
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		while(temp!=NULL)
		{
			printf("%d\t",temp->info);
			temp=temp->prev;
		}
	}
}

void insertatbegin()
{
	struct Node *newnode;
	int item;
		newnode = (struct Node *)malloc(sizeof(struct Node));
		if(newnode == NULL)
		{
			printf("\n MEMORY NOT ALLOCATED");
		}
		else
		{
			printf("\n Enter the value to Insert:");
			scanf("%d",&item);
			newnode->info=item;
			newnode->prev=NULL;
			newnode->next=NULL;
			if(start==NULL)
			{
				start=newnode;
			}
			
			else
			{
				newnode->prev=NULL;
				newnode->next=start;
				start->prev=newnode;
				start=newnode;
			}
			
		}
}


void insertatend()
{
	struct Node *temp;
	struct Node *newnode;
	int item;
	newnode=(struct Node *)malloc(sizeof(struct Node));
	if (newnode==NULL)
	printf("\n Memory not allocated");
	else
	{
		printf("\n enter the value to insert:");
		scanf("%d",&item);
		newnode->info=item;
		newnode->next=NULL;
		newnode->prev=NULL;
	}
	if(start==NULL)
	start=newnode;
	else
	{
		temp=start;
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=newnode;
		newnode->prev=temp;
	}
}

void insertatspecific()
{
	struct Node *newnode,*temp,*ptr;
	int item;
	int pos,count=1;
	newnode=(struct Node *)malloc(sizeof(struct Node));
	if (newnode==NULL)
	printf("\n Memory not allocated");
	else
	{
		printf("\n Enter value to insert:");
		scanf("%d",&item);
		newnode->info=item;
		newnode->next=NULL;
		newnode->prev=NULL;
		if(start==NULL)
		{
			start=newnode;
		}
		else
		{
			printf("\n Enter the position:");
			scanf("%d",&pos);
			temp=start;
			while(temp!=NULL&&count!=pos)
			{
				count++;
				ptr=temp;
				temp=temp->next;
			}
			if(temp==NULL)
			{
				printf("\n NODE IS NOT PRESENT");
			}
			else
			{
				ptr->next=newnode;
				newnode->prev=ptr;
				newnode->next=temp;
				temp->prev=newnode;
			}
		}
	}
}


void deleteatbegin()
{
	struct Node *temp;
	if(start==NULL)
	{
		printf("\n LIST IS EMPTY");
	}
	else
	{
		temp=start;
		printf("\n The DELETED Element is =%d",start->info);
		//start = temp->next;
		start = start->next;
		start->prev=NULL;
	    free(temp);
	}
}
void deleteatend()
{
	struct Node *temp,*ptr;
	if(start==NULL)
	{
		printf("\n LIST IS EMPTY");
	}
	else
	{
		if(start->next==NULL)
		{
			printf("\n The DELETED Element is = %d",start->info);
			start=NULL;
		}
		
		else
	   {
		temp=start;
		while(temp->next!=NULL)
		{
			ptr=temp;
			temp=temp->next;
		}
		ptr->next=NULL;
		printf("\n The DELETED Element is = %d",temp->info);
		free(temp);
	   }
	}
}

void deleteatspecific()
{
	struct Node *temp,*ptr;
	int loc,count=1;
	if(start==NULL)
	{
		printf("\n LIST IS EMPTY");
	}
	else
	{
		if(start->next==NULL)
		{
			printf("The Deleted Element is =%d",start->info);
			start=NULL;
			free(temp);
		}
		else
		{
			temp=start;
			printf("\n Enter the location to Delete:");
		    scanf("%d",&loc);
		   while(temp!=NULL&&count!=loc)
		    {
			   ptr=temp;
			    temp=temp->next;
			    count++;
		    }
		    if(temp==NULL)
		    {
			printf("\n NO NODE IS PRESENT");
			}
			else
			{
				ptr->next=temp->next;
				temp->prev=ptr;
				printf("\n The DELETED NODE is = %d",temp->info);
				free(temp);
			}
		}
	}
}
