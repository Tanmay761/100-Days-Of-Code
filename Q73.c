#include <stdio.h>

int main()
{
    int matrix[10][10];
    int rowSum[10];
    int rows, cols, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    printf("Enter matrix elements:\n");

    for (i = 0; i < rows; i++)
    {
        rowSum[i] = 0;

        for (j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]);
            rowSum[i] = rowSum[i] + matrix[i][j];
        }
    }

    printf("Sum of each row:\n");

    for (i = 0; i < rows; i++)
    {
        printf("Row %d sum = %d\n", i + 1, rowSum[i]);
    }

    return 0;
}