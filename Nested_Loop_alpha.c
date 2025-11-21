#include<stdio.h>
int main()
{
	int i,j;
	
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			printf("%c ",(char)(64+j)); //A=65,a=97
		}
		printf("\n");
	}
	return 0;
}
