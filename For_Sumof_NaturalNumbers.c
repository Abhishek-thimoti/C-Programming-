#include<stdio.h>
int main()
{
	int n , sum = 0;
	int i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum = sum + i;
	}
	printf("Sum of %d natural numers is %d",n,sum);
	return 0;
}
