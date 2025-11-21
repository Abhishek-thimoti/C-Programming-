#include<stdio.h>
int main()
{
	int i,n,sum;
	printf("Enter a natural number : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum = i + n ;
	}
	printf("%d",sum);
	return 0;
}
