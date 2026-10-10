
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int nums[n], answer[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int prefix = 1;

    // Calculate product of elements on the left
    for (int i = 0; i < n; i++) {
        answer[i] = prefix;
        prefix *= nums[i];
    }

    int suffix = 1;

    // Multiply by product of elements on the right
    for (int i = n - 1; i >= 0; i--) {
        answer[i] *= suffix;
        suffix *= nums[i];
    }

    // Print answer array
    for (int i = 0; i < n; i++) {
        printf("%d ", answer[i]);
    }

    return 0;
}