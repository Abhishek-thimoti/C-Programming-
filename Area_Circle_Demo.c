/* Documentation section : Tell about the program
Programe Name : Area of Circle
.......
*/
#include<stdio.h> // Link section

#define PI 3.142 // Definition Function

void displayarea(); //Function Prototype

float area;  //Global Variable Declaration

int main() // main function
{
	float r; //local Variable declaration
	scanf("%f",&r);
	area = PI*r*r;
	displayarea();
	return 0;
}
void displayarea()
{
	printf("Area = %.2f",area);
}
