#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i = 2;
	do
	{
		printf("%d ",i);
		i++;
 	}while(i<n);
	printf("Task Completed\n");
    return 0;
}
