#include<stdio.h>
int main()
{
	int i,n;
	scanf("%d",&n);
	printf("Break demo\n");
	for(i=1;i<=n;i++)
	{
		if(i==5)
		    break;
		    //continue;
		   printf("%d ",i);
	}
	printf("\nTask Completed");
	return 0;
}
