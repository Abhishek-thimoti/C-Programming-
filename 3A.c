#include<stdio.h>
#include<string.h>
struct det
{
	char name[10];
	int s1,s2,s3,s4,s5,total;
};
int main(int argc,int *argv[])
{
	struct det d;
	strcpy(d.name,argv[1]);
	d.s1 = atoi(argv[2]);
	d.s2 = atoi(argv[3]);
	d.s3 = atoi(argv[4]);
	d.s4 = atoi(argv[5]);
	d.s5 = atoi(argv[6]);
	d.total = d.s1+d.s2+d.s3+d.s4+d.s5;
	printf("Name\t1\t2\t3\t4\t5\n");
	printf("%s\t%d\t%d\t%d\t%d\t%d",d.name,d.s1,d.s2,d.s3,d.s4,d.s5,d.total);
}
