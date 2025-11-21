#include<stdio.h>
int main()
{
	int x=101;
	int *ptr1;
	ptr1=&x;
	printf("%u %u\n",&x,ptr1);
	printf("%d %d",x,*ptr1);
	return 0;
}
