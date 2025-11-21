#include<stdio.h>
int main()
{
	double c,f,k;
	int option;
	printf("1.Celsius to Fahrenheit\n2.Fahrenheit to Celsius\n3.Celsius to Kelvin\n");
	printf("Enter your option\n");
	scanf("%d",&option);
	switch(option)
	{
		case 1 :
			printf("Enter the celsius\n");
			scanf("%lf",&c);
			f = (double)(c*9)/5 + 32 ;
			printf("C = %lf and F = %lf",c,f);
			break;
		case 2 :
			printf("Enter the fahrenheit\n");
			scanf("%lf",&f);
			c = (f-32)*5/9 ;
			printf("F = %lf and C = %lf",f,c);
			break;
		case 3 :
			printf("Enter the Celsius\n");
			scanf("%lf",&c);
			k = c + 273.15;
			printf("C = %lf and K = %lf",c,k);
			break; 
	    default :
             printf("Enter the valid option\n");
    }
		return 0;
}
