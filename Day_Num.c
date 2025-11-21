#include<stdio.h>
int main()
{
  int day_num;
  printf("Enter a Day number\n");
  scanf("%d",&day_num);
  switch(day_num)
  {
  	case 1:
  		printf("Sunday\n");
  		break;
  	case 2:
  		printf("Monday\n");
  		break;
  	case 3:
  		printf("Tuesday\n");
  		break;
  	case 4:
	  printf("Wednesday\n");
	  break;
	case 5:
	  printf("Thursday\n");
	  break;
	case 6:
	printf("Friday\n");
	break;
	case 7:
	printf("Saturday\n");
	break;
	default :
	printf("Enter a valid week day number(1-7)\n");
	break;  
  }
  printf("Task completed");
  return 0;
}
