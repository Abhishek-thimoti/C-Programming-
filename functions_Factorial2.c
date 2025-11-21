#include<stdio.h>
int factorial(int);
int main()
{
	int X;
	scanf("%d",&X);
	int F=factorial(X);
	printf("Factorial of %d is : %d\n",X,F);
	return 0;
}
int factorial(int N)
{
	int i,pro=1;
	for(i=1;i<=N;i++)
	{
		pro=pro*i;
	}
	return pro;
}
