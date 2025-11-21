#include<stdio.h>
int add(int,int);
int diff(int,int);
int multiplication(int,int);
int division(int,int);
int main()
{
	int x,y;
	scanf("%d%d",&x,&y);
	int sum,diff,pro,div;
	sum=add(x,y);
	diff=subtraction(x,y);
	pro=multiplication(x,y);
	div=division(x,y);
	printf("%d\n",sum);
	printf("%d\n",diff);
	printf("%d\n",pro);
	printf("%d\n",div);
}
int add(int a,int b)
{
	return a+b;
}
int subtraction(int a,int b)
{
	return a-b;
}
int multiplication(int a,int b)
{
	return a*b;
}
int division(int a,int b)
{
	return a/b;
}
