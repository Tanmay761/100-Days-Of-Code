#include <stdio.h>

int main()
{
    int arr[10], n, element, position, i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to insert: ");
    scanf("%d", &element);

    printf("Enter the position: ");
    scanf("%d", &position);

    if (position < 1 || position > n + 1)
    {
        printf("Invalid position.\n");
    }
    else
    {
        // Shift elements to the right
        for (i = n; i >= position; i--)
        {
            arr[i] = arr[i - 1];
        }

        arr[position - 1] = element;
        n++;

        printf("Array after insertion:\n");

        for (i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}