#include<stdio.h>
int main()
{
	//Program to find the area of Triangle.
	int B,H;
	float Area;
	printf("Breadth of triangle: ");
	scanf("%d",&B);
	printf("Height of triangle: ");
	scanf("%d",&H);
	Area=(B*H)/2;
	printf("Area of triangle : %f",Area);
	return 0;
}
