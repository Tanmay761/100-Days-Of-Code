#include <stdio.h>

int main()
{
    int arr[100], n, i;
    int totalSum = 0, leftSum = 0;
    int pivot = -1;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the array elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        totalSum += arr[i];
    }

    for (i = 0; i < n; i++)
    {
        int rightSum = totalSum - leftSum - arr[i];

        if (leftSum == rightSum)
        {
            pivot = i;
            break;
        }

        leftSum += arr[i];
    }

    printf("%d\n", pivot);

    return 0;
}