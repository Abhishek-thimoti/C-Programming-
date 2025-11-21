#include<stdio.h>
void wish(); //function prototype
int main()
{
	printf("Before wish call ....\n");
	wish();                            //function call
	printf("After wish call ....\n");
}
void wish()                              //function definition
{
	printf("Good Afternoon ....\n");
}
