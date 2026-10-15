
#include <stdio.h>

int main() {
    int n, arr[100], k, temp;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &k);

    if (k < 1 || k > n) {
        printf("Invalid k\n");
        return 0;
    }

    // Sort the array in ascending order
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // The kth smallest element is at index k - 1
    printf("%d\n", arr[k - 1]);

    return 0;
}
