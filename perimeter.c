#include<stdio.h>
int main()
{
	//Program to find the Perimeter of Rectangle
	int P,L,B;
	P=2*(L+B);
	printf("Length of rectangle :");
	scanf("%d",&L);
	printf("Breadth of rectangle :");
	scanf("%d",&B);
	P=2*(L+B);
	printf("Perimeter of rectangle : %d",P);
    return 0;
}
