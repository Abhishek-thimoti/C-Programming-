#include<stdio.h>
int palindrome(int);
int main()
{
	int n;
	scanf("%d",&n);
	int rev = palindrome(n);
	printf("reverse of %d is : %d\n",n,rev);
	if(n==rev)
	{
	printf("palindrome");
	}
	else
	{
		printf("It is not a palindrome");
	}
	return 0;
}
int palindrome(int n)
{
	int rem,sum = 0;
	while(n>0)
	{
	rem = n%10;
	sum = sum*10+rem;
	n=n/10;
    } 
    return sum;
}
