#include<stdio.h>
int main()
{
	int a=10,b=20;
	int *x,*y;
	x=&a;
	y=&b;
	printf("%d %d\n",a,b);       //10 20
	printf("%u %u\n",x,y);      // address of a,b
	printf("%d %d\n",*x,*y);   // * = value at address
	*x=30;                    // initializing value to * mean<
	printf("%d %d\n",a,b);   //
}
