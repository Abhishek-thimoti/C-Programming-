#include<stdio.h>
int main()
{
	int w=0,l=0,c=0;
	FILE *fp1;
	fp1=fopen("CricketTeam.txt","r");
	if(fp1==NULL)
	{
		printf("File connection Failed\n");
		return 1;
	}
	char ch;
	while(1)
	{
		ch=fgetc(fp1);
		if(ch==EOF)
		    break;
		    
		printf("%c",ch);
		c++;
			if(ch==' ' || ch=='\n')
			{
				w++;
			}
			if(ch=='\n')
			{
				l++;
			}
	}
	printf("No. of lines :%d",l);
	printf("\nNo. of Words :%d",w);
	printf("\nNo. of Characters :%d",c);
	fclose(fp1);
	return 0;
}
