// BFS Algorithm
#include<stdio.h>
#include<stdlib.h>

int graph[10][10],visited[10],total;
void bfs(int);
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
	printf("\n Bfs traversal is:");
	bfs(0);
}
void bfs(int vertex)
{
	int j;
	printf("\n %d",vertex);
	visited[vertex]=1;
	for(j=0;j<total;j++)
	{
		if(!visited[j] && graph[vertex][j]==1)
		{
			bfs(j);
	}
	}
}
