#include<stdio.h>
#include<stdlib.h>
void main()
{
	int a[10],n,k,j,i;
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
	for(i=1;i<n;i++)
	{
		k=a[i];
		j=i-1;
		while(j>=0 && a[j]>k)
		{
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1]=k;
	}
	printf("\nelements after sorting");
	for(i=0;i<n;i++)
	{
		printf("\t%d",a[i]);
	}
}
