#include <stdio.h>

int main()
{
    int nums[100], n, target;
    int first = -1, last = -1;
    int low, high, mid, i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the sorted array:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    printf("Enter the target: ");
    scanf("%d", &target);

    // Find first occurrence
    low = 0;
    high = n - 1;

    while (low <= high)
    {
        mid = low + (high - low) / 2;

        if (nums[mid] == target)
        {
            first = mid;
            high = mid - 1;
        }
        else if (nums[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    // Find last occurrence
    low = 0;
    high = n - 1;

    while (low <= high)
    {
        mid = low + (high - low) / 2;

        if (nums[mid] == target)
        {
            last = mid;
            low = mid + 1;
        }
        else if (nums[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    if (first == -1)
    {
        printf("-1, -1\n");
    }
    else
    {
        printf("First occurrence: %d at index %d\n",
               nums[first], first);

        printf("Last occurrence: %d at index %d\n",
               nums[last], last);

        printf("First and last indices: %d, %d\n",
               first, last);
    }

    return 0;
}