#include<stdio.h>
int main()
{
	float arr[5]={101.0,202.0,303.0,404.0,505.0};
	float *ptr;
	int i;
	ptr=&arr[0];
	printf("Accessing of array elements by using pointer variable\n");
	for(i=0;i<5;i++)
	{
		printf("%u -> %f\n",(ptr+i),*(ptr+i)); //here i value depends on datatype
	}
	return 0;
}
