#include<stdio.h>
void swapByAddress(int *a, int *b)
{
    int temp;
    
    temp = *a;
    *a = *b;
    *b = temp;
    printf("Inside swapByAddress: a = %d, b = %d\n", *a, *b);
}
int main()
{
    int x , y;
	scanf("%d%d",&x,&y);   
    printf("Before swapByAddress: x = %d, y = %d\n", x, y);
    swapByAddress(&x, &y);
    printf("After swapByAddress: x = %d, y = %d\n", x, y);
    return 0;
}
