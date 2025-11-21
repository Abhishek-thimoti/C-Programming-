#include<stdio.h>
int main()
{
	int option,num1,num2,result;
	char choice;
	do
	{
		printf("1. Adittion\n2. Subtraction\n3. Product\n4. Division\n5. Modules\n");
		printf("Enter your choice\n");
		scanf("%d",&option);
		printf("Enter Two numbers\n");
		scanf("%d%d",&num1,&num2);
		
		switch(option)
		{
			case 1:
				result = num1+num2;
				printf("Sum = %d\n",result);
				break;
			case 2:
				result = num1-num2;
				printf("Different = %d\n",result);
				break;
			case 3:
				result = num1*num2;
                printf("Product = %d\n",result);
                break;
            case 4:
            	if(num2!=0)
				{
			    result = num1/num2;
			    printf("Division = %d\n",result);
                }
                else
                printf("Division is not possible\n");
                break;
            case 5:
			    if(num2!=0)
			    {
			    	result = num1%num2;
			    	printf("Mod = %d\n",result);
				}
				else
				{
				printf("Mod is not possible");
				}
				break;
			default :
				printf("Enter a valid option\n");
				break;
		}
		fflush(stdin);
		printf("Do you want to continue .......(Y/N)?\n");
		scanf("%c",&choice);
	}while(choice == 'Y' || choice =='y');
	printf("Thank you for using my calculator\n");
	return 0;
}
