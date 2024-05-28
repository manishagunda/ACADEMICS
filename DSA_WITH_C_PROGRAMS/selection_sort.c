#include<stdio.h>
#include<stdlib.h>
void main()
{
	int a[10],n,min,pos,j,i;
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
	for(i=0;i<n-1;i++)
	{
		min=a[i];
		pos=i;
		for(j=i+1;j<n;j++)
		{
			if(min>a[j])
			{
				min=a[j];
				pos=j;
			}
			else
			{
				min=min;
			}
		}
		a[pos]=a[i];
		a[i]=min;	
	}
	printf("\nelements after sorting");
	for(i=0;i<n;i++)
	{
		printf("\t%d",a[i]);
	}
}
