#include<stdio.h>
int main()
{
	char A[10];
	char B[10];
	int i;
	printf("Enter the string\n");
	gets(A);
	for(i=0;A[i]!='\0';i++)
	{
		B[i]=A[i];
	}
	B[i]='\0';
	printf("Given string: %s\n",A);
	printf("Copied string: %s\n",B);
	return 0;
}
