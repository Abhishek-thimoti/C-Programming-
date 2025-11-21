#include <stdio.h>

int main() {
    int X, Y;
    
    // Read the melting point (X) and initial temperature (Y)
    scanf("%d %d", &X, &Y);

    // Initialize variables
    int time = 0; // time in minutes
    int currentTemperature = Y; // current temperature of the kiln

    // Loop until the current temperature reaches or exceeds the melting point
    while (currentTemperature < X) {
        time++;
        currentTemperature += time; // increase temperature by time after each minute
    }

    // Output the result
    printf("%d\n", time);

    return 0;
}
