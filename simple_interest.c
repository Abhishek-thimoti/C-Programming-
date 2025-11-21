#include<stdio.h>
int main()
{
	int p,t,r;
	float i;
//assign the value
    p=100000;
    t=22;
    r=2;
    i=(p*t*r/100);
    printf("principal amount = %d\n",p);
    printf("time in months = %d\n",t);
    printf("rate of interest = %d\n",r);
    printf("simple interest = %f\n",i);
    return 0;
}
