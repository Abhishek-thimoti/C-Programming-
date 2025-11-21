#include<stdio.h>
int main()
{
	int Units;
	double Bill,Surcharge,Tot_Bill;
	
	scanf("%d",&Units);
	if(Units<=50)
	{
		Bill=Units*0.50;
	}
	else if(Units>50 && Units<=150)
	{
		Bill=50*0.50+(Units-50)*0.75;
	}
	else if(Units>150 && Units<=250)
	{
		Bill=50*0.50+100*0.75+(Units-150)*1.20;
	}
	else
	{
		Bill=50*0.50 + 100*0.75 + 100*1.20 + (Units-250)*1.50;
	}
	Tot_Bill=Bill+0.2*Bill;
	printf("No of Units = %d\n",Units);
	printf("Bill = %.2lf\n",Bill);
	printf("Net Bill = %.2lf\n",Tot_Bill);
	return 0;
}
