#include<stdio.h>
void displayMatrix(int rows,int cols,int matrix[rows][cols]);
void findTranspose(int rows,int cols,int matrix[rows][cols]);
int main()
{
	int rows,cols,i,j;
	scanf("%d%d",&rows,&cols);
	int A[rows][cols];
	printf("Enter the %d elements\n",(rows*cols));
	for(i=0;i<rows;i++)
	{
	    for(j=0;j<cols;j++)
	    {
	    	scanf("%d",&A[i][j]);
	    }
	}
	printf("Given Matrix A is : \n");
	displayMatrix(rows,cols,A);
	findTranspose(rows,cols,A);
	return 0;
}
void displayMatrix(int rows,int cols,int Matrix[rows][cols])
{
	int i,j;
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			printf("%d ",Matrix[i][j]);
		}
		printf("\n");
	}
}
void findTranspose(int rows,int cols,int Matrix[rows][cols])
{
	int T[cols][rows],i,j;
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			T[j][i]=Matrix[i][j];
		}
	}
	printf("Transpose of a Given Matrix A is : \n");
	displayMatrix(cols,rows,T);
}
