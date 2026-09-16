#include <stdio.h>

int main()
{
    int arr[10], n, position, i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position to delete: ");
    scanf("%d", &position);

    if (position < 1 || position > n)
    {
        printf("Invalid position.\n");
    }
    else
    {
        // Shift elements to the left
        for (i = position - 1; i < n - 1; i++)
        {
            arr[i] = arr[i + 1];
        }

        n--;

        printf("Array after deletion:\n");

        for (i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}