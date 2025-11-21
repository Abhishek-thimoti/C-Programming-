#include<stdio.h>
int main()
{
	char A[30];
	char B[30],C[50];
	int i,j=0;
	printf("Enter any  two strings\n");
	gets(A);
	gets(B);
	for(i=0;A[i]!='\0';i++)
	{
		C[j]=A[i];
		j++;
	}
	C[j]=' ';
	j++;
	for(i=0;B[i]!='\0';i++)
	{
		C[j]=B[i];
		j++;
	}
	C[j]='\0';
	printf("First string %s: \n",A);
	printf("Second string %s: \n",B);
    printf("Concatenated string %s: \n",C);
	return 0;
}
