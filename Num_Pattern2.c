/*1
  23
  456
  78910 
*/
#include<stdio.h>
int main()
{
	int i,j;
	
	for(i=1;i<=15;i++)
	{  
		for(j=1;j<=15;j--)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
	return 0;
}
