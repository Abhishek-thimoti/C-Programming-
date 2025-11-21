#include<stdio.h>
int main()
{
	int i = 1;
	int n;
	scanf("%d",&n);
	while(i<=10)
	{
		int a = i*n; //a is not necessery
		printf("%d X %d = %d\n",n,i,n*i);
		i++;
	}
	return 0;
}
