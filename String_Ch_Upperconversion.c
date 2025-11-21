#include<stdio.h>
int main()
{
	int arr[26]={0};
	char str[50];
	int i;
	printf("Enter any string\n");
	gets(str);
	printf("Before Uppercase conversion : %s\n",str);
	strupr(str);
	printf("After Uppercase conversion : %s\n",str);
	for(i=0;str[i]!='\0';i++)
	{
		arr[str[i]-'A']++; //65 or 'A'
	}
	for(i=0;i<26;i++)
	{
		if(arr[i]!=0)
		{
			printf("%c -> %d \n",(char)i+65,arr[i]);
		}
	}
	return 0;
}
