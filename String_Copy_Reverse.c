#include<stdio.h>
int main()
{
	char A[50];
	char B[50];
	int len,i,j=0;
	printf("Enter the string\n");
	gets(A);
	len=strlen(A);
	printf("Length of %s is: %d\n",A,len);
	for(i=len-1;i>=0;i--)
	{
		B[j]=A[i];
		j++;
	}
	B[j]='\0';
	printf("Reverse of the %s is: %s\n",A,B);
	return 0;
}
