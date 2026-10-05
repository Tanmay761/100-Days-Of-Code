#include <stdio.h>

int main()
{
    int arr[100], stack[100], result[100];
    int n, top = -1;
    int i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the array elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++)
    {
        // Remove elements smaller than or equal to current element
        while (top >= 0 && stack[top] <= arr[i])
        {
            top--;
        }

        // If stack is empty, no previous greater element
        if (top == -1)
            result[i] = -1;
        else
            result[i] = stack[top];

        // Push current element into stack
        stack[++top] = arr[i];
    }

    printf("Previous Greater Elements:\n");

    for (i = 0; i < n; i++)
    {
        printf("%d ", result[i]);
    }

    return 0;
}