#include<stdio.h>
int factors(int);
int main()
{
	int x,y,i;
	scanf("%d %d",&x,&y);
	for(i=x;i<=y;i++)
	{
		int fact_count = factors(i);
		if(fact_count==2)
		printf("%d ",i);
	}
	return 0;
}
int factors(int m)
{
	int count =2 ,i;
	for(i=2;i<=m/2;i++)
	{
		if(m%i==0)
		{
			count++;
		}
	}
	return count;
}
