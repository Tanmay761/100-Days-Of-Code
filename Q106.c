#include <stdio.h>

int main() {
    int n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n], stack[n], top = -1;

    printf("Enter array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = n - 1; i >= 0; i--) {

        // Remove elements smaller than or equal to current element
        while (top >= 0 && stack[top] <= arr[i]) {
            top--;
        }

        // If stack is empty, no greater element exists
        if (top == -1) {
            printf("-1 ");
        } else {
            printf("%d ", stack[top]);
        }

        // Push current element into stack
        stack[++top] = arr[i];
    }

    return 0;
}