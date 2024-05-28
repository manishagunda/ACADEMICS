#include<stdio.h>
void dividing(int [],int,int);
void merging(int [],int,int,int);
void main()
{
    int a[50],i,size;
    printf("Enter Array Size:");
    scanf("%d",&size);
    printf("Enter Array Elements:\n");
    for(i=0;i<size;i++)
    scanf("%d",&a[i]);
    printf("\n Array Before Sorting:\n");
    for(i=0;i<size;i++)
    printf("%d\t",a[i]);
    dividing(a,0,size-1);
    printf("\n Array After MERGE SORTING IS:\n");
    for(i=0;i<size;i++)
    printf("%d\t",a[i]);
}
void dividing(int a[],int first,int last)
{
    int mid;
    if(first<last)
    {
        mid=(first+last)/2;
        dividing(a,first,mid);//left array
        dividing(a,mid+1,last);//right array
        merging(a,first,mid,last);//sub arrays left first to mid and right array from mid+1 to last
    }
}
void merging(int a[],int first,int mid,int last)
{
    int i,j,k;
    int temp[last+1];
    i=first;
    j=mid+1;
    k=first;
    while(i<=mid&&j<=last)
    {
        if(a[i]<=a[j])
        {
            temp[k]=a[i];
            i++;
        }
        else
        {
            temp[k]=a[j];
            j++;
        }
        k++;
    }
    if(i>mid)
    {
        while(j<=last)
        {
            temp[k]=a[j];
            j++;
            k++;
        }
    }
    else
    {
        while(i<=mid)
        {
            temp[k]=a[i];
            i++;
            k++;
        }
    }
    for(i=first;i<=last;i++)
    {
        a[i]=temp[i];
    }
}
