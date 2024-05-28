#include<stdio.h>
void main()
{
	int a[10],n,e,f=0,i;
	printf("\nenter size of array\n");
	scanf("%d",&n);
	printf("\nenter elements in array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nthe array elements are\n");
	for(i=0;i<n;i++)
	{
		printf("\t%d",a[i]);
	}
	printf("\nenter search element\n");
	scanf("%d",&e);
	for(i=0;i<n;i++)
	{
		if(a[i]==e)
		{
			printf("\nelement found at location %d\n",i);
			f=1;
			break;
		}
	}
	if(f==0)
	{
		printf("\nelement not found\n");
	}
}
