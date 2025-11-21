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
	int sum =0;
	for(i=0;i<size;i++)
	{
	    sum +=arr[i];
	}
	printf("%d",sum);
	return 0;
}
