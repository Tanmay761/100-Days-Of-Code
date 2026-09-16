#include <stdio.h>

int main()
{
    int arr[5], i, search, found = 0;

    printf("Enter 5 elements:\n");

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &search);

    for (i = 0; i < 5; i++)
    {
        if (arr[i] == search)
        {
            found = 1;
            printf("Element found at position %d\n", i + 1);
            break;
        }
    }

    if (found == 0)
    {
        printf("Element not found in the array.\n");
    }

    return 0;
}