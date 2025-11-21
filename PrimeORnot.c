#include<stdio.h>
int main()
{
	int N,i,c=0;
	scanf("%d",&N);
	for(i=1;i<=N;i++)
	{
		if(N%i==0)
		{
			c++;
		}
	}
	if(c==2)
	{
	printf("%d is a prime Number",N);
    }
    else
    {
    	printf("%d is not a prime number",N);
	}
	return 0;
}
