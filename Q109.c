#include <stdio.h>

int main()
{
    int arr[100], n, k;
    int i, sum = 0, maxSum;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter k: ");
    scanf("%d", &k);

    // Sum of first k elements
    for (i = 0; i < k; i++)
    {
        sum += arr[i];
    }

    maxSum = sum;

    // Sliding window
    for (i = k; i < n; i++)
    {
        sum = sum + arr[i] - arr[i - k];

        if (sum > maxSum)
        {
            maxSum = sum;
        }
    }

    printf("Maximum sum of subarray of size %d = %d\n", k, maxSum);

    return 0;
}