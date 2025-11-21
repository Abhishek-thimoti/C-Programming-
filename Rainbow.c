#include<stdio.h>
int main()
{
	char col_code;
	printf("Enter a colour code\n");
	scanf("%c",&col_code);
	switch(col_code)
	{
		case 'V' :
		case 'v' :	
			printf("Violet\n");
			break;
		case 'I' :
		case 'i' :	
			printf("Indigo\n");
			break;
		case 'B' :
		case 'b' :	
			printf("Blue\n");
			break;
		case 'G':
		case 'g' :	
			printf("Green\n");
			break;
		case 'Y' :
		case 'y' :	
			printf("yellow\n");
			break;
		case 'O' :
		case 'o' :	
			printf("Orange\n");
			break;
		case 'R' :
		case 'r' :	
			printf("Red\n");
			break;
		default :
		printf("Enter a vaild col_code\n");	
	}
	printf("Task completed\n");
	return 0;
}
