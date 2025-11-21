#include<stdio.h>
int main()
{
	char name[50];
	gets(name);
	int i,word_count=0;
	for(i=0;name[i]!=0;i++)
	{
		if(name[i]==' ')
		word_count++;
	}
	printf("Total Number of Words: %d\n",word_count+1);
	return 0;
}
