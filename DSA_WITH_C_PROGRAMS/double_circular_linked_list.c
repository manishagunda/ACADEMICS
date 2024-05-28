#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int info;
	struct Node *next;
	struct Node *prev;
};
struct Node *start=NULL;

void create();
void traverse();
void insertatbegin();
void insertatend();
void insertatposition();
void deleteatbegin();
void deleteatend();
void deleteatposition();
void sum();
void minandmax();
void evenodd();
int main()
{
	int ch;
	printf("\n 1.Create");
	printf("\n 2.Traverse");
	printf("\n 3.Insert at Begin");
	printf("\n 4.Insert at End");
	printf("\n 5.Insert at Specific");
	printf("\n 6.Delete at Begin");
	printf("\n 7.Delete at End");
	printf("\n 8.Delete at Specific");
	printf("\n 9. SUM of Elements");
	printf("\n 10. Minimum andMaximum Element");
	printf("\n 11. Even and Odd Elements");
	printf("\n 12.Exit");
	while(1)
	{
		printf("\n\nenter your choice :");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				{
					create();
					break;
				}
			case 2:
				{
					traverse();
					break;
				}
			case 3:
				{
					insertatbegin();
					break;
				}
				case 4:
				{
					insertatend();
					break;
				}
			case 5:
				{
					insertatposition();
					break;
				}
			case 6:
				{
					deleteatbegin();
					break;
				}
			case 7:
				{
					deleteatend();
					break;
				}
			case 8:
				{
					 deleteatposition();
					 break;
				}
				case 9:
					{
						sum();
						break;
					}
				case 10:{
					minandmax();
					break;
				}
				case 11:{
					evenodd();
					break;
				}
			case 12:
				{
					exit(0);
					break;
				}
			default :
				{
					printf("Invalid choice ");
					break;
				}
		}		
	}
}

void create()
{
	struct Node *newnode,*temp;
	int item,total,index;
	if(start==NULL)
	{	
	printf("Enter the number of nodes you want to create : ");
	scanf("%d",&total);
	if(total<=0)
	{
		printf("Size of list must be greater than zero");
	}
	else
	{
		temp=(struct Node *)malloc(sizeof(struct Node));
		printf("Enter the value to keep in the node :");
		scanf("%d",&item);
		temp->info=item;
		temp->next=NULL;
		temp->prev=NULL;
		start=temp;
		for(index=2;index<=total;index++)
		{
			newnode=(struct Node *)malloc(sizeof(struct Node));
			printf("Enter the value to keep in the node :");
			scanf("%d",&item);
			newnode->info=item;
			newnode->next=start;
			newnode->prev=temp;
			temp->next=newnode;
			temp=newnode;
			
		}
		printf("list is created");
		
	}
	}
	else
	printf("List is already present");
}

void traverse()
{
	struct Node *temp;
	if(start==NULL)
	printf("List is Empty");
	else
	{ 
		temp=start;
		printf("\n Values of Linked List are:\n");
		do
		{
			printf("%d\t",temp->info); 
			temp=temp->next;
		}
		while(temp!=start);
		
		temp=start;
		printf("\nValues in reverse order : \n");
		while(temp->next!=start)
		{
			temp=temp->next;	
		}
		do
		{
			printf("%d\t",temp->info);
			temp=temp->prev;
		}	
		while(temp!=start);
		
	}
}
void insertatbegin()
{
	
	struct Node *newnode,*temp;
	int item;
	newnode=(struct Node *)malloc(sizeof(struct Node));
	if(newnode ==NULL)
	printf("memory is not allocated");
	else
	{
		printf("\n Enter the value to insert at begining :");
		scanf("%d",&item);
		newnode->info=item;
		newnode->next=newnode;
		newnode->prev=newnode;
		if(start==NULL)
		start=newnode;
		else
		{
		temp=start;
		do
		{
			temp=temp->next;	
		}
		while(temp->next!=start);
			start->prev=newnode;
			newnode->next=start;
			start=newnode;
			temp->next=start;
			newnode->prev=temp;
		}
		
	}
}
void insertatend()
{
		struct Node *newnode,*temp;
	int item;
	newnode=(struct Node *)malloc(sizeof(struct Node));
	if(newnode ==NULL)
	printf("memory is not allocated");
	else
	{
		printf("\n Enter the value to insert at end :");
		scanf("%d",&item);
		newnode->info=item;
		newnode->next=newnode;
		newnode->prev=newnode;
		if(start==NULL)
		start=newnode;
		else
		{
			temp=start;
			while(temp->next!=start)
			{
				temp=temp->next;
			}
			temp->next=newnode;
			newnode->prev=temp;
			start->prev = newnode;
			newnode->next=start;
		}
	}
}
void insertatposition()
{
		struct Node *newnode,*temp,*ptr;
	int item,loc,count=1;
	newnode=(struct Node *)malloc(sizeof(struct Node));
	if(newnode ==NULL)
	printf("memory is not allocated");
	else
	{
		printf("\n Enter the value to insert:");
		scanf("%d",&item);
		newnode->info=item;
		newnode->next=newnode;
		newnode->prev=newnode;
		if(start==NULL)
		start=newnode;
		else
		{
			printf("\n enter the loaction at which you want to insert :");
			scanf("%d",&loc);
			temp=start;
			do
			{
				count++;
				ptr=temp;
				temp=temp->next;
			}
			while(temp!=start&&count!=loc);
			if(temp==NULL)
			{
				printf("\nNode is not present ");
			}
			else
			{
				ptr->next=newnode;
				newnode->next=temp;
				temp->prev=newnode;
				newnode->prev=ptr;
			}
		}
	}
}
void deleteatbegin()
{
	struct Node *temp,*ptr;
	if(start==NULL)
	printf("List is empty");
	else
	{
		temp=start;
		ptr=start;
		printf("\ndeleted  value is %d",temp->info);
		do
		{
			ptr=ptr->next;	
		}
		while(ptr->next!=start);
		start=start->next;
		start->prev=NULL;
		ptr->next=start;
		free(temp);
	}
}
void deleteatend()
{
	struct Node *temp,*ptr;
	if(start==NULL)
	printf("\nList is empty");
	else
	{
		temp=start;
		if(start->next==NULL)
		start=NULL;
		else
	{
		while(temp->next!=start)
		{
			ptr=temp;
			temp=temp->next;
		}
	printf("\nDeleted element is %d",temp->info);
	ptr->next=start;
	free(temp);		
	}
	}
}
void deleteatposition()
{
	struct Node *temp,*ptr,*ptr1;
	int count=1,loc;
	if(start==NULL)
	printf("\nList is empty");
	else
	{
		
		temp=start;	
		if(start->next==NULL)
		{
			start=NULL;
			printf("Deleted element is %d",temp->info);
			free(temp);
		}
		else
		{
		printf("\nEnter the location of node to delete : ");
		scanf("%d",&loc);
		do
		{
			ptr=temp;
			count=count+1;
			temp=temp->next;
		}while(temp!=start&&count!=loc);
		if(temp==NULL)
		printf("Node is not present");
		else
		{
		ptr1=temp->next;
		ptr->next=ptr1;
		ptr1->prev=ptr;
		printf("Deleted element is %d",temp->info);
		free(temp);
		}
		}
	}
}
void sum()
{
	struct Node *temp;
	int sum=0;
	if(start == NULL)
	{
		printf("\n List Is Empty");
	}
	else
	{
		temp = start;
		do
		{
			sum += temp->info;
			temp = temp->next;
		}while(temp !=start);
		printf("\n Sum of Elements in List = %d",sum);
	}
}
void minandmax()
{
	struct Node *temp;
	int min=0,max=0;
	if(start == NULL)
	{
		printf("\n List Is Empty");
	}
	else
	{
		temp = start;
		min = temp->info;
		max = temp->info;
		do
		{
			if(max<temp->info)
			{
				max = temp->info;
			}
			else
			{
				max = max;
			}
			if(min>temp->info)
			{
				min = temp->info;
			}
			else
			{
				min = min;
			}
			temp = temp->next;
		}while(temp!=start);
		printf("\n The Minimum Element in list = %d",min);
		printf("\n The Maximum Element in list = %d",max);
	}
}
void evenodd()
{
	struct Node *temp;
	if(start == NULL)
	{
		printf("\n List Is Empty");
	}
	else
	{
		printf("\n Even Elements are:\n");
		temp = start;
		do
		{
			if(temp->info%2==0)
			{
				printf("%d\t",temp->info);
			}
			temp = temp->next;
		}while(temp!=start);
		
		printf("\n Odd Elements are:\n");
		temp = start;
		do
		{
			if(temp->info%2!=0)
			{
				printf("%d\t",temp->info);
			}
			temp = temp->next;
		}while(temp!=start);
	}
}
