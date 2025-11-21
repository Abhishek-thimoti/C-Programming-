#include<stdio.h>
int findfactors(int);
int main()
{
	int n;
	scanf("%d",&n);
	int result = findfactors(n);
	printf("\nFactors of a given number %d is : %d",n,result);
	if(result==2)
	{
		printf("\nGiven number %d is a Prime number",n);
	}
	else
	{
		printf("\nGiven number %d not prime number",n);
	}
	return 0;
}
int findfactors(int m)
{
	int count = 2 , i;
	printf("1 ");
	for(i=2;i<=m/2;i++)
	{
		if(m%i==0)
		{
			printf("%d ",i);
			count++;
		}
	}
	printf("%d\n",m);
	return count;
}
