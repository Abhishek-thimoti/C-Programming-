#include<stdio.h>
int main()
{
	int N,i,sum=0;
	scanf("%d",&N);
	int m;
	while(N!=0)
	{
	m=N%10;
	sum=m+sum;
	N=N/10;
    }
	printf("%d",sum);
	return 0;
}
