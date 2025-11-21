#include<stdio.h>
int main()
{
    int X;
    scanf("%d", &X);  // Read the input integer X

    // Check if X is an even number and >= 4
    if (X % 2 == 0 && X >= 4) {
        printf("YES\n");  // It can be divided into two even parts
    } else {
        printf("NO\n");   // Otherwise, it cannot be divided
    }

    return 0;
}
