#include<stdio.h>
int main()
{
    int A, B;    
    // Input format: Two space-separated integers
    printf("Enter the time taken by Tap A and Tap B to fill the tank (in minutes): ");
    scanf("%d %d", &A, &B);
    
    // Calculate the rates
    float rateA = 1.0 / A;  // Tap A fills 1/A of the tank per minute
    float rateB = 1.0 / B;  // Tap B fills 1/B of the tank per minute
    
    // Combined rate
    float combinedRate = rateA + rateB;
    
    // Time to fill the tank together
    float timeToFill = 1.0 / combinedRate;
    
    // Output the result
    printf("Time taken to fill the tank with both taps: %.2f minutes\n", timeToFill);
    
    return 0;
}
