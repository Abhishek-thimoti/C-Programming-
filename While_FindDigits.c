#include<stdio.h>
int finddigitscount(int);
{
	int digits=0;
	while(n>0)
	{
		int rem = n%10;
		digit++;
		n=n/10;
	}
}
int main()
{
	int n,digit;
	scanf("%d",&n);
	int count  = finddigitscount(n);
	printf("No of the digits of %d is : %d",n,count);
	return 0;
}

