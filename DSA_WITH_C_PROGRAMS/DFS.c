#include<stdio.h>
#include<stdlib.h>

int graph[10][10],visited[10],total,arr[30];
static int k=0, count=0;
void dfs(int);
void main()
{
	int i,j;
	printf("\n Enter total no of vertex:");
	scanf("\n%d", &total);
	printf("\n Enter adjacency matrix for a graph:");
	for(i=0;i<total;i++)
	{
		for(j=0;j<total;j++)
		{
			scanf("\n%d", &graph[i][j]);
		}
	}
	
	for(i=0;i<total;i++)
	{
		visited[i]=0;
	}
	printf("\n Dfs traversal is:");
	dfs(0);
}
void dfs(int vertex)
{
	int j,c=0;
	count++;
	printf("\n %d",vertex);
	visited[vertex]=1;
	for(j=0;j<total;j++)
	{
		if(!visited[j] && graph[vertex][j]==1)
		{
			arr[++k]=j;
			c=1;
		}
		if(count==total)
		{
			exit(0);
		}
    }
		if(c==1)
		{
			dfs(arr[k]);
		}
		else
		{
			k--;
			dfs(arr[k]);
		}
	
}
