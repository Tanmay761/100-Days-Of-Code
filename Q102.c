#include <stdio.h>

int main()
{
    int arr[100], n, x;
    int low, high, mid, ans = -1;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the sorted array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter x: ");
    scanf("%d", &x);

    low = 0;
    high = n - 1;

    while (low <= high)
    {
        mid = low + (high - low) / 2;

        if (arr[mid] >= x)
        {
            ans = mid;
            high = mid - 1;  // Search for an earlier occurrence
        }
        else
        {
            low = mid + 1;
        }
    }

    printf("%d\n", ans);

    return 0;
}