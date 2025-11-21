#include<stdio.h>
int main()
{
	int i,j,n;
	scanf("%d",&n);
	
	for(i=1;i<=2*n-1;i++)
	{
		int k;
		if(i<=n)
		k=i;
		else
		k=n-i%n;
		for(j=1;j<=k;j++)
		printf("* ");
		printf("\n");
	}
	return 0;
}
