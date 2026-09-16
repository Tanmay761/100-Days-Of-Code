#include <stdio.h>

int main()
{
    int arr[5], i;

    printf("Enter 5 elements:\n");

    // Read array elements
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Array elements are:\n");

    // Print array elements
    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}