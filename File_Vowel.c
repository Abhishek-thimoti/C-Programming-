#include<stdio.h>
int main()
{
	int c=0;
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
		else
		{
			if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
			{
				c++;
			}
		}
		printf("%c",ch);
	}
	printf("\n%d",c);
	fclose(fp1);
	return 0;
}
