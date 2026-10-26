
#include <stdio.h>

int main() {
    int n, i, result = 0;

    scanf("%d", &n);

    int arr[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        result ^= arr[i];
    }

    for (i = 1; i <= n - 1; i++) {
        result ^= i;
    }

    printf("%d\n", result);

    return 0;
}
