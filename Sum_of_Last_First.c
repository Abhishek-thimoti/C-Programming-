#include<stdio.h>
int main()
{
	int N,i,sum=0;
	scanf("%d",&N);
	int m=N%10;
	while(1)
	{
		if(N/10==0){
			break;
		}
		N=N/10;
	}
	printf("%d %d",m,N);
	return 0;
}
