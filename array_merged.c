#include<stdio.h>
int main()
{
	int n1,n2,i,j,k=0;
	printf("enter the size of array 1:\n");
	scanf("%d",&n1);
	int arr1[n1];
	printf("enter the elements in array1:\n");
	for(i=0;i<n1;i++)
	{
		scanf("%d",&arr1[i]);
	}
	printf("enter the size of the array 2:\n");
	scanf("%d",&n2);
	int arr2[n2];
	printf("enter the elements in array 2:\n");
	for(i=0;i<n2;i++)
	{
		scanf("%d",&arr2[i]);
	}
	int mergearray[n1+n2];
	for(i=0;i<n1;i++)
	{
		mergearray[k++]=arr1[i];
	}
	for(j=0;j<n2;j++)
	{
		mergearray[k++]=arr2[j];
	}
	printf("merged array:\n");
	for(i=0;i< (n1 + n2);i++)
	{
		printf("%d ",mergearray[i]);
	}
	return 0;
}
