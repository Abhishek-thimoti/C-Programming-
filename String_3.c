#include<stdio.h>
int main()
{
	char item[20];
	int i,len=0;
	printf("Enter the item name\n");
	scanf("%s",item);
	for(i=0;item[i]!='\0';i++)
	{
		len++;
    }
    printf("Length of the given string %s is: %d\n",item,len);
    return 0;
}
