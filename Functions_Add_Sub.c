#include<stdio.h>
void addition(int,int);
int subtraction(int,int);
int main()
{
	int x,y;
	scanf("%d %d",&x,&y);
	addition(x,y);
	printf("control comes from Addition function");
	int res=subtraction(x,y);
	printf("Subtraction = %d",res);
	multiplication(x,y);
	return 0;
}
int subtraction(int m, int n)
{
	int diff = m - n;
	return diff;
}
void addition(int m,int n)
{
	int sum = m + n;
	printf("sum = %d",sum);
}
void multiplication(int m,int n)
{
	int mul = m*n;
	printf("mul = %d",m*n);
}
