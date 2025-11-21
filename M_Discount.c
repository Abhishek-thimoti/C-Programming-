#include <stdio.h>

int main() {
    int A, B; // Discounts for the first and second store
    const int priceStore1 = 100; // Price at the first store
    const int priceStore2 = 200; // Price at the second store

    // Read the discount percentages
    scanf("%d %d", &A, &B);

    // Calculate the discounted prices
    double discountedPrice1 = priceStore1 * (1 - (A / 100.0));
    double discountedPrice2 = priceStore2 * (1 - (B / 100.0));

    // Compare the prices and output the result
    if (discountedPrice1 < discountedPrice2) {
        printf("FIRST\n");
    } else if (discountedPrice1 > discountedPrice2) {
        printf("SECOND\n");
    } else {
        printf("BOTH\n");
    }

    return 0;
}

