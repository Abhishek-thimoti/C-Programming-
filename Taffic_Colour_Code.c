#include<stdio.h>
int main()
{
	char col_code;
	scanf("%c",&col_code);
	switch(col_code)
	{
		case 'R':
			printf("STOP....\n");
			break;
		case 'Y':
		    printf("SLOW DOWN.....\n");
		    break;
		case 'G':
			printf("GO....\n");
			break;
		default:
			printf("Enter a valid colour code\n");
	}
	printf("Drive safely\n");
	return 0;
}
