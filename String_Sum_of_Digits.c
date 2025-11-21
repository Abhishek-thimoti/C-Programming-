#include<stdio.h>
int main()
{
	char str[30];
	int i,sum=0;
	printf("Enter any string\n");
	gets(str);
	for(i=0;str[i]!=0;i++)
	{
		if(str[i]>48 && str[i]<57)
		{
			sum=sum+(str[i]-48);
		}
	}
	printf("%d",sum);
	return 0;
}
