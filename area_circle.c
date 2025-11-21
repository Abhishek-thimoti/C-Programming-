#include<stdio.h>
int main()
{
	//Program to find the area of Circle
	int R;
	float P = 3.142,A;
	printf("radius value :");
	scanf("%d",&R);
	printf("pi value is : %f\n",P);
	A=P*R*R;
	printf("area of circle : %.3lf ",A);
	return 0;
}
