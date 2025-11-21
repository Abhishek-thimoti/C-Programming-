#include<stdio.h>
int main()
{
	int i,n;
	scanf("%d",&n);
	char cities[n][30];
	for(i=0;i<n;i++)
	{
		scanf("%s",&cities[i]);
	}
	printf("The given city Names are\n");
	for(i=0;i<n;i++)
	{
		printf("%s\n",cities[i]);
	}
	return 0;
}
