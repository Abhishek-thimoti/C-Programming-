#include<stdio.h>
int main()
{
	char ch;
	scanf("%c",&ch);
	if(ch >= 'a' && ch <= 'z')
	{
		printf("%c : %d",ch,ch-'a' +1);
	}
	if(ch >= 'A' && ch <= 'Z')
	{
		printf("%c : %d",ch,ch-'A'+1);
	}
	return 0;
}
