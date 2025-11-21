#include<stdio.h>
int main()
{
	char ch;
	scanf("%c",&ch);
	//Assume the inout contains only alphabets
	if(ch>='A' && ch<='Z')
	{
		printf("%c is a uppeercase character\n",ch);
	}
	else
	{
		printf("%c is a Lowercase character\n",ch);
	}
	return 0;
}
