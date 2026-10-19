#include <stdio.h>

int main() {
    int a[100], b[100], merged[200];
    int m, n;
    int i = 0, j = 0, k = 0;

    scanf("%d", &m);
    for (i = 0; i < m; i++) {
        scanf("%d", &a[i]);
    }

    scanf("%d", &n);
    for (j = 0; j < n; j++) {
        scanf("%d", &b[j]);
    }

    i = 0;
    j = 0;

    while (i < m && j < n) {
        if (a[i] <= b[j]) {
            merged[k++] = a[i++];
        } else {
            merged[k++] = b[j++];
        }
    }

    while (i < m) {
        merged[k++] = a[i++];
    }

    while (j < n) {
        merged[k++] = b[j++];
    }

    for (i = 0; i < k; i++) {
        printf("%d ", merged[i]);
    }

    return 0;
}