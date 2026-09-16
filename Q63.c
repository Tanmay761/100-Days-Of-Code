#include <stdio.h>

int main()
{
    int arr1[5], arr2[5], merged[10];
    int i;

    printf("Enter 5 elements for first array:\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr1[i]);
    }

    printf("Enter 5 elements for second array:\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr2[i]);
    }

    // Copy first array
    for (i = 0; i < 5; i++)
    {
        merged[i] = arr1[i];
    }

    // Copy second array
    for (i = 0; i < 5; i++)
    {
        merged[i + 5] = arr2[i];
    }

    printf("Merged array:\n");

    for (i = 0; i < 10; i++)
    {
        printf("%d ", merged[i]);
    }

    return 0;
}