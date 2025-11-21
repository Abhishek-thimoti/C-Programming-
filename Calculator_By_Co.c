#include <stdio.h>
int main() 
{
    double num1, num2, result;
    char operator;
    printf("Enter first number: ");
    scanf("%lf", &num1);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator);
    printf("Enter second number: ");
    scanf("%lf", &num2);
    switch (operator) 
	{
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) 
			{
                result = num1 / num2;
            } else 
			{
                printf("Error: Division by zero!\n");
            }
            break;
        default:
            printf("Invalid operator. Please use +, -, *, or /.\n");
            break;
    }
    printf("Result = %.0lf",result);
    return 0;
}

