#include<stdio.h>
int main()
{
	float a,b,c,sum;
	
	printf("Enter angle of the triangle\n ");
	scanf("%f%f%f",&a,&b,&c);
	
	sum=a+b+c;
	if(sum==180)
{
	printf("it is a valid triangle\n");
}
else
{
	printf("it is not a valid triangle\n");
}
	return 0;
}
