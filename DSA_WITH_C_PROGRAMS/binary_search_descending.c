#include<stdio.h>
void main()
{
	int a[10],n,e,f=0,l,m,h,i;
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
	l=0,h=n-1;
	while(l<=h)
	{
		m=(l+h)/2;
		if(e==a[m])
		{
			printf("\nelement found at %d location\n",m);
			f=1;
			break;
		}
		else if(e<a[m])
		{
			l=m+1;
		}
		else
		{
			h=m-1;
		}
	}
	if(f==0)
	{
		printf("\nelement not found\n");
	}
}
