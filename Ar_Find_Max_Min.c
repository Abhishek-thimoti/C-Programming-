#include<stdio.h>
int main()
{
	int i,n,min,max;
	printf("Enter the size of an array\n");
	scanf("%d",&n);
	int arr[n];
	printf("Enter Values");
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	min=arr[0];
	for(i=0;i<n;i++)
	{
		if(arr[i]<min)
		{
			min = arr[i];
		}
	}
	max =arr[0];
	for(i=0;i<n;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
	}
	printf("Minimum element in the array is : %d\n",min);
	printf("Maximum element in the array is : %d\n",max);
	return 0;
}
