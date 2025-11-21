#include<stdio.h>
int main()
{
	int Salary;
	double Hra,Da,Gs;
	scanf("%d",&Salary);
	if(Salary<=10000)
	{
		Hra = 0.2*Salary;
		Da = 0.8*Salary;
	}
	else if(Salary>10000 && Salary<=20000)
	{
		Hra = 0.25*Salary;
		Da = 0.90*Salary;
	}
	else 
	{
		Hra = 0.3*Salary;
		Da = 0.95*Salary;
    }
    printf("Basic Salary = %d\n",Salary);
    printf("Hra Value = %.2lf\n",Hra);
    printf("Da Value = %.2lf\n",Da);
    Gs = Salary+Hra+Da;
    printf("Gross Salary = %.2lf\n",Gs);
    return 0;
}
