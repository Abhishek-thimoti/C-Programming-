#include<stdio.h>
int main()
{
	int p,t,r;
	float i;
	printf("Enter principle, time , rate of interest\n");
	scanf("%d%d%d",&p,&t,&r);
    i=(p*r*t/100);
    printf("p=%d t=%d r=%d",p,t,r);
    printf("simple interst = %f",i);
    
    return 0;
}
