#include<stdio.h>
void swap(int *, int *);
void swap(int *x, int *y)
{
	int temp=*x;
	*x=*y;
	*y=temp;
}
int main()
{
	int a,b;
	printf("Enter any two values\n");
	scanf("%d%d",&a,&b);
	printf("Before swapping a and b values\n");
	printf("%d %d\n",a,b);
	swap(&a,&b);
	printf("After swapping a and b values\n");
	printf("%d %d",a,b);
	return 0;
}
