#include<stdio.h>
int main()
{
	int age ;
	printf("Enter your age: \n");
	scanf("%d",&age);
	if(age >= 18)
	{
		printf("Hi! you are eligible for voting \n");
		printf("Thank you for using my application\n ");
	}
	else
	{
		printf("sorry! you are not elligible \n");
		printf("you need to wait %d years to vote ",18-age);
		
	}
	return 0;
}
