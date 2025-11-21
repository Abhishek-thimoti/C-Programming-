#include<stdio.h>
int main() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
	{
        printf("'%c' is an alphabet.\n", ch);
    }
	 else if (ch >= '0' && ch <= '9')
	{
        printf("'%c' is a digit.\n", ch);
    }
	 else if (ch == ' ' || ch == '\t' || ch == '\n') 
	{
        printf("'%c' is a space.\n", ch);
    }
	 else
	{
        printf("'%c' is a special character.\n", ch);
    }
    return 0;
}
