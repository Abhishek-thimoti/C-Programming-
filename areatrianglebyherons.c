#include<stdio.h>
#include<math.h>
int main()
{
  int a,b,c;
  double s,area;
  printf("Enter the sides of the Triangle\n");
  scanf("%d%d%d",&a,&b,&c);
  s=(a+b+c)/2.0;
  area=(s*(s-a)*(s-b)*(s-c));
  printf("sidesof the triangle:\n");
  printf("side -1=%d\n",a);
  printf("side -2=%d\n",b);
  printf("side -3=%d\n",c);
  printf("Area of the triangle is : %.3f",area);	
return 0;
}
