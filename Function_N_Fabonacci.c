#include<stdio.h>
int fibonacci(int);
int main()
{
	int range;
	scanf("%d",&range);
	fibonacci(range);
	return 0;
}
int fibonacci(int n)
{
	int a=0,b=1,c,count=0;
	c=a+b;
	while(count<n)
	{
		printf("%d ",c);
		a=b;
		b=c;
		c=a+b;
		count++;
	}
}
