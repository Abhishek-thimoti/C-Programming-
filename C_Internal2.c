#include<stdio.h>
int main()
{
	int x,i,temp;
	printf("Enter a element to search\n");
	scanf("%d",&x);
	int arr[8]={11,22,33,44,55,66,77,88};
	for(i=0;i<8;i++)
	{
		if(arr[i]==x)
		{
			temp=i;
			printf("%d is present in %d\n",x,i);
			break;
		}
	}
	if(temp==0)
	{
		printf("%d is not found in the array\n");
	}
	return 0;
}
