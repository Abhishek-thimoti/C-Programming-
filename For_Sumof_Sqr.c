#include<stdio.h>
int main()
{
	int i,n,sqr=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
     {
        sqr = sqr + (i*i);
     }
    printf("Sum of squares of %d is %d",n,sqr);
	return 0;
}
