#include<stdio.h>
struct student 
{
	char name[20];
	int roll;
	char gender;
};

int main()
{
	struct student s1 = {"Srinu",143,'M'};
	struct student s2 = s1;
	printf("Name : %s\tRoll : %d\tGender : %c",s2.name,s2.roll,s2.gender);
	return 0;
}
