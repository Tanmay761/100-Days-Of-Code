#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;
    
    // Input the number of terms
    printf("Enter the number of terms (n): ");
    scanf("%d", &n);
    
    // Handle edge case for non-positive input
    if (n <= 0) {
        printf("The number of terms must be greater than 0.\n");
        return 0;
    }

    // Term 1 is explicitly handled as 1 (or 1/1)
    sum += 1.0; 

    // Generate subsequent terms starting from the 2nd term
    int numerator = 3;
    int denominator = 4;

    for (int i = 2; i <= n; i++) {
        sum += (double)numerator / denominator;
        numerator += 2;
        denominator += 2;
    }

    // Print the final sum
    printf("Sum of the series up to %d terms is: %.6lf\n", n, sum);

    return 0;
}