#include<stdio.h>
int main()
{
	int Mon_num;
	printf("enter a Month number\n");
	scanf("%d",&Mon_num);
	switch (Mon_num)
	{
		case 3 :
		case 4 :
		case 5 :	
			printf("Summer\n");
			break;
		case 6 :
		case 7 :
		case 8 :
		case 9 :	
			printf("Rainy\n");
			break;
		case 10 :
		case 11 :
		case 12 :
		case 1 :
		case 2 :	
		 	printf("Winter\n");
		 	break;
		 default :
		 	printf("Enter a valid month num\n");
		 	break;
	}
	printf("task completed\n");
	return 0;
}
