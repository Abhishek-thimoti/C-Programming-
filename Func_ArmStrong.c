#include<stdio.h>
#include<math.h>
int ArmStrong(int);
int main()
{
	int n,res;
	scanf("%d",&n);
	res = FindArmStrong(n);
	if(n==res)
	{
		printf("Given number %d is armstrong number ",n);
	}
	else
	{
		printf("Give number %d is not a armstrong number ",n);
	}
	return 0;
}
int FindArmStrong(int n)
{
	int digits=(int)log10(n)+1;
	int rem,sum=0;
	while(n>0)
	{
		rem = n%10;
		sum = sum +(int)pow(rem,digits);
		n=n/10;
	}
	return sum;
}
