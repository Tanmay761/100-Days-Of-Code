
#include <stdio.h>

int main() {
    int n, k;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &k);

    if (k <= 0 || k > n) {
        printf("Invalid k");
        return 0;
    }

    int queue[n];
    int front = 0, rear = -1;

    for (int i = 0; i < n; i++) {

        // Store the index of negative elements
        if (arr[i] < 0) {
            queue[++rear] = i;
        }

        // Remove negative elements outside the window
        while (front <= rear && queue[front] <= i - k) {
            front++;
        }

        // Print result for each complete window
        if (i >= k - 1) {
            if (front <= rear) {
                printf("%d ", arr[queue[front]]);
            } else {
                printf("0 ");
            }
        }
    }

    return 0;
}