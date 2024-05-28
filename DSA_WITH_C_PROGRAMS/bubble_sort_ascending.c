#include<stdio.h>
void main()
{
	int a[10],n,i,j,t;
	printf("\nenter size of array\n");
	scanf("%d",&n);
	printf("\nenter elements in array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nthe array elements before sorting\n");
	for(i=0;i<n;i++)
	{
		printf("\t%d",a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	printf("\narray after sorting\n");
	for(i=0;i<n;i++)
	{
		printf("\t%d",a[i]);
	}
}
