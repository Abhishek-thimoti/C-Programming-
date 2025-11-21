#include<stdio.h>
int main()
{
	int a,b,i,n;
	printf("Enter any two table and steps\n");
	scanf("%d %d %d",&a,&b,&n);
	for(i=1;i<=n;i++)
	{
		printf("%d X %d = %d   %d X %d = %d\n",a,i,(a*i),b,i,(b*i));
	}
	printf("Task completed");
	return 0;
}
