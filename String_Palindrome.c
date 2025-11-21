#include<stdio.h>
#include<string.h>
int main()
{
	char str[50];
	int i,len,flag=1;
	printf("Enter any string\n");
	gets(str);
	strupr(str); // to solve capital letter problem
	len=strlen(str);
	for(i=0;i<len/2;i++)
	{
		if(str[i]!=str[len-i-1])
		{
			flag=0;
			break;
		}
	}
	if(flag==1)
	{
		printf("%s is a palindrome string\n",str);
	}
	else
	{
		printf("%s is not a palindrome string\n",str);
	}
	return 0;
}
