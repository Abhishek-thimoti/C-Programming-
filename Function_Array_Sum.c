#include<stdio.h>
int arraysum(int [],int);
int main()
{
	int n,i;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int result=arraysum(arr,n);
	printf("Sum of array elements is : %d\n",result);
	return 0;
}
int arraysum(int x[],int size)
{
	int sum=0,i;
	for(i=0;i<size;i++)
	{
		sum=sum+x[i];
	}
	return sum;
}
