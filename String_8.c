#include<stdio.h>
int main()
{
	char item[20];
	int i;
	printf("Enter the item name\n");
	scanf("%s",item);
	int Vcount=0,Ccount=0;
	for(i=0;item[i]!='\0';i++)
	{
		if(item[i]=='a'||item[i]=='e'||item[i]=='i'||item[i]=='o'||item[i]=='u') //item[i]=='A'||item[i]=='E'||item[i]=='I'||item[i]=='O'||item[i]=='U'
		{
			Vcount++;
	    }
	    else
	    {
	    	Ccount++;
	    }
    }
    printf("Number of Vowels : %d\n",Vcount);
    printf("Number of Consonants : %d\n",Ccount);
    return 0;
}
