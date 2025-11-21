#include<stdio.h>
int main()
{
	int rows,cols,i,j;
	scanf("%d%d",&rows,&cols);
	int M1[rows][cols],M2[rows][cols],M3[rows][cols];
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			scanf("%d",&M1[i][j]);
		}
	}
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			scanf("%d",&M2[i][j]);
		}
	}	
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			M3[i][j]=M1[i][j]+M2[i][j];
		}
	}
	printf("1st Matrix:\n");
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
		printf("%d ",M1[i][j]);	
		}
		printf("\n");
	}
	printf("2st Matrix:\n");
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
		printf("%d ",M2[i][j]);	
		}
		printf("\n");
	}
	printf("3rd Matrix:\n");
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
		printf("%d ",M3[i][j]);	
		}
		printf("\n");
	}		
	return 0;
}
