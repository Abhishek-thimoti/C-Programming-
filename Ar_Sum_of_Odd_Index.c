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
	int odd=0;
	for(i=0;i<size;i++)
	{
	    if(i%2!=0)
		{
			odd+=arr[i];
		}
	}
	printf("Sum of odd index is :%d",odd);
	return 0;
}
