#include<stdio.h>
int main()
{
	int i,size;
	scanf("%d",&size);
	int arr[size];
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	int even=0;
	for(i=0;i<size;i++)
	{
	    if(i%2==0)
		{
			even =even +arr[i];
		}
	}
	printf("Sum of even index is :%d",even);
	return 0;
}
