#include <stdio.h>
int main() 
{
    int N;
    scanf("%d", &N);  // Read the number of applications
    int unprocessed = N % 20;  // Calculate unprocessed applications
    printf("%d\n", unprocessed);  // Output the result
    return 0;
}
