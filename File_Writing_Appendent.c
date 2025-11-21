#include<stdio.h>
int main()
{
	FILE *fp1;
	fp1=fopen("Pushpa2.txt","a+"); //for single time or replace
	
	if(fp1==NULL)
	{
		printf("File connection Failed");
		return 1;
	}
	char ch;
	while(1)
	{
		scanf("%c",&ch);
		if(ch=='@')
		    break;
	    fputc(ch,fp1);
	}
	fclose(fp1);
	return 0;
}
