#include <stdio.h>
#include <math.h>

int main()
{
    int num, original, digit, count = 0;
    int sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    // Count the number of digits
    int temp = num;
    while (temp != 0)
    {
        count++;
        temp = temp / 10;
    }

    // Calculate the sum of powers of digits
    temp = num;
    while (temp != 0)
    {
        digit = temp % 10;
        sum = sum + pow(digit, count);
        temp = temp / 10;
    }

    if (sum == original)
    {
        printf("%d is an Armstrong number.\n", original);
    }
    else
    {
        printf("%d is not an Armstrong number.\n", original);
    }

    return 0;
}