#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n); //n is the size of the array
	int arr[n];     // n blocked array will be created.
	int i;
	for(i=0;i<n;++i)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;++i)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
