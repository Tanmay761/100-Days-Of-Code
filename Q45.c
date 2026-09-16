#include <stdio.h>

double sumOfSeries(int n) {
    double totalSum = 0.0;
    for (int i = 1; i <= n; i++) {
        double numerator = 2.0 * i;
        double denominator = (4.0 * i) - 1.0;
        totalSum += numerator / denominator;
    }
    return totalSum;
}

int main() {
    int n;
    printf("Enter the number of terms (n): ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Please enter a valid positive integer.\n");
        return 1;
    }
    
    printf("The sum of the series up to %d terms is: %.4f\n", n, sumOfSeries(n));
    return 0;
}