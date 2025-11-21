#include<stdio.h>
int main()
{
	//it is used to find frequence of digits
	char str[30];
	int i;
	int digits_count[10]={0};
	printf("Enter any string\n");
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		digits_count[str[i]-'0']++;
	}
	printf("Digits count:\n");
    for(i=0;i<10;i++)
    {
    	if(digits_count[i]!=0)
    	{
    		printf("%d -> %d\n",i,digits_count[i]);
		}
	}
	return 0;
}
