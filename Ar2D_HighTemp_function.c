#include<stdio.h>
int findHotestTemp(int rows,int cols ,int arr[rows][cols]);
void displayMatrix(int rows,int cols, int arr[rows][cols]);

void displayMatrix(int row_size,int col_size, int arr[row_size][col_size])
{
	int i,j;
	for(i=0;i<row_size;i++)
	{
		for(j=0;j<col_size;j++)
		{
			printf("%d ",arr[i][j]);
		}
			printf("\n");
	}
}

int findHotestTemp(int row_size,int col_size ,int arr[row_size][col_size])
{
	int max_temp=0,i,j;
	for(i=0;i<row_size;i++)
	{
		for(j=0;j<col_size;j++)
		{
			if(arr[i]>max_temp)
			{
				max_temp=arr[i][j];
			}
		}
	}
	return max_temp;
}
int main()
{
	int rows,cols,i,j;
	scanf("%d%d",&rows,&cols);
	int temp[rows][cols];
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			scanf("%d",&temp[i][j]);
		}
	}
	displayMatrix(rows,cols,temp);
	int hot_temp=findHotestTemp(rows,cols,temp);
	printf("Hottest Temperature is : %d\n",hot_temp);
	return 0;
}
