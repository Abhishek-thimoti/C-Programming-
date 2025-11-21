#include<stdio.h>
int main()
{
	char item[20];
	int i;
	printf("Enter the item name\n");
	scanf("%s",item);
	int Ucount=0,Lcount=0,Dcount=0,Scount=0;
	for(i=0;item[i]!='\0';i++)
	{
		if(item[i]>='A' && item[i]<='Z') //if(item[i]>= && item[i]<='z')
		{
			Ucount++;
	    }
	    else if(item[i]>='a' && item[i]<='z')
	    {
	    	Lcount++;
		}
		else if(item[i]>='0' && item[i]<='9')
		{
			Dcount++;
		}
		else
		    Scount++;
    }
    printf("Number of Upper Case Characters : %d\n",Ucount);
    printf("Number of Lower Case Characters : %d\n",Lcount);
    printf("Number of Digits : %d\n",Dcount);
    printf("Number of Special Characters : %d\n",Scount);
    return 0;
}
