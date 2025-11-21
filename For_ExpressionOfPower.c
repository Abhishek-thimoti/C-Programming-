#include<stdio.h>
#include<math.h>
int main()
{
	int  i,n,x;
	int sum = 1;
	scanf("%d %d",&x,&n);
	for(i=1;i<=n;i++)
	{
		sum = sum + (int)pow(x,i);
	}
	printf("%d",sum);
	return 0;
}
