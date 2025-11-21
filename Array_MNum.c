#include<stdio.h>
int main()	
{
	int marks[6]={67,85,98,87,76,69};
	//print the array elements without using loop
	printf("%d\n",marks[0]);
	printf("%d\n",marks[1]);
	printf("%d\n",marks[2]);
	printf("%d\n",marks[3]);
	printf("%d\n",marks[4]);
	printf("%d\n",marks[5]);
	//print the array using loop
	int i;
	for(i = 0;i<6;i++)
	{
		printf("%d\n",marks[i]);
	}
	return 0;
}
