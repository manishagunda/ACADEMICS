#include<stdio.h>
#include<stdlib.h>
void quicksort(int[],int,int);
void main()
{
	int a[10],n,i;
	printf("\nenter size of array");
	scanf("%d",&n);
	printf("\nenter elements into array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nelements before sorting");
	for(i=0;i<n;i++)
	{
		printf("\t%d",a[i]);
	}
	quicksort(a,0,n-1);
	printf("\nelements after sorting");
	for(i=0;i<n;i++)
	{
		printf("\t%d",a[i]);
	}
}
void quicksort(int a[],int first,int last)
{
	int i,j,pivot,temp;
	if(first<last)
	{
		pivot=first;
		i=first;
		j=last;
		while(i<j)
		{
			while(a[i]<=a[pivot] && i<last)
			i++;
			while(a[j]>a[pivot])
			j--;
			if(i<j)
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
		temp=a[pivot];
		a[pivot]=a[j];
		a[j]=temp;
		quicksort(a,0,j);
		quicksort(a,j+1,last);
	}
}
