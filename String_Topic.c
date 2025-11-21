#include<stdio.h>
int main()
{
	char s[100],S[100];
	scanf("%[^\n]",s); // ^ it is except 
	//scanf("%[aeiou]s",S); if we give characters in " scanset " then it will only take them
	printf("%s",s);
	//printf("%s\n",S);
	return 0;
}
