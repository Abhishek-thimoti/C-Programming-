#include<stdio.h>
int main()
{
	int m[3][5]={
	{50,69,78,99,35},
	{67,45,34,49,56},
	{42,98,76,59,35}
	};
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("M[%d][%d] = [%d] ",i,j,m[i][j]);
		}
		printf("\n");
	}
	return 0;
}
