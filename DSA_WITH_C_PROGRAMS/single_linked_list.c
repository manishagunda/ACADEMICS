#include<stdio.h>
#include<stdlib.h>
void traverse();
void insertatbegin();
void insertatend();
void insertspecific();
void deleteatbegin();
void deleteatend();
void deletespecific();
void create();
struct Node{
	int info;
	struct Node *next;
}; // Creating a node
struct Node *start=NULL; 
void main()
{
	int ch;
	printf("\n 1. INSERT AT BEGINNING");
	printf("\n 2. INSERT AT END");
	printf("\n 3. INSERT AT SPECIFIC");
	printf("\n 4. DELETE AT BEGINNING");
	printf("\n 5. DELETE AT END");
	printf("\n 6. DELETE AT SPECIFIC POSITION");
	printf("\n 7.TRAVERSE");
	printf("\n 8.CREATE");
	printf("\n 9. EXIT");
	while(1)
	{
		printf("\n\nmake your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				insertatbegin();
				break;
			case 2:
				insertatend();
				break;
			case 3:
				insertspecific();
				break;
			case 4:
				deleteatbegin();
				break;
			case 5:
				deleteatend();
				break;
			case 6:
				deletespecific();
				break;
			case 7:
				traverse();
				break;
			case 8:
				create();
				break;
			case 9:
				exit(0);
				break;
			default:
				printf("Invalid choice");
				break;
		}
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
		printf("\n The values in the List are:\n");
		while(temp!=NULL)
		{
			printf("%d\t",temp->info);
			temp=temp->next;
		}
	}
}
void insertatbegin()
{
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
	}
	if(start==NULL)
	start=newnode;
	else
	{
		newnode->next=start;
		start=newnode;
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
	}
}
void insertspecific()
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
				newnode->next=temp;
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

void deletespecific()
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
			//free(temp);
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
				printf("\n The DELETED NODE is = %d",temp->info);
				free(temp);
			}
		}
	}
}

void create()
{
	struct Node *temp,*newnode;
	int index,total,item;
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
			temp->next=NULL;
			start = temp;
			for(index=2;index<=total;index++)
			{
				newnode = (struct Node*)malloc(sizeof(struct Node));
				printf("\n Enter the value to keep in Node:");
				scanf("%d",&item);
				newnode->info=item;
				newnode->next = NULL;
				temp->next = newnode;
				temp=newnode;
			}
			printf("\n List is Created");
		}
	}
	else
	{
		printf("\n LIST ALREADY EXITS");
	}
}
