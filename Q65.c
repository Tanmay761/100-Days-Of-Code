#include <stdio.h>

int main()
{
    int arr[5], i, search;
    int low, high, mid, found = 0;

    printf("Enter 5 elements in sorted order:\n");

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &search);

    low = 0;
    high = 4;

    while (low <= high)
    {
        mid = (low + high) / 2;

        if (arr[mid] == search)
        {
            found = 1;
            printf("Element found at position %d\n", mid + 1);
            break;
        }
        else if (arr[mid] < search)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    if (found == 0)
    {
        printf("Element not found in the array.\n");
    }

    return 0;
}