#include <stdio.h>

int main() {
    int N, M, X;

    // Read input
    scanf("%d %d %d", &N, &M, &X);

    // Calculate the perimeter of the rectangle
    int perimeter = 2 * (N + M);

    // Calculate the total cost of the wireframe
    int cost = perimeter * X;

    // Print the result
    printf("%d\n", cost);

    return 0;
}
