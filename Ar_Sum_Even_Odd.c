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
	int even=0,odd=0;
	for(i=0;i<size;i++)
	{
	    if(arr[i]%2==0)
		{
			even =even +arr[i];
		}
		else
		{
			odd = odd+arr[i];
		}
	}
	printf("Even is :%d\nOdd is :%d ",even,odd);
	return 0;
}
