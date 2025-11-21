#include<stdio.h>
int main()
{
	char ch;
	scanf("%c",&ch);
	if(ch>='a' && ch<='z'){
		printf("%c",ch-'a'+'A');
	}
	else if(ch>='A' && ch<='Z'){
		printf("%c",ch-'A'+'a');
	}
	return 0;
}
