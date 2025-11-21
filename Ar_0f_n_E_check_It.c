#include<stdio.h>
int main()
{
	int n,i,key,found=0,pos=0;
	printf("Enter size of array:\n");
	scanf("%d",&n);
	int arr[n];
	printf("Enter values:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter a key value to search in the given array\n");
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
		if(key==arr[i])
		{
			found=1;
			pos=i;
			break;
		}
	}
	if(found==1)
		printf("%d is found at %d index in the given array",key,pos);
	else
	printf("%d is not found in the array",key);	
	return 0;
}
