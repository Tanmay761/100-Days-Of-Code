#include <stdio.h>

int main()
{
    int num, first, last, middle, divisor, result;

    printf("Enter a number: ");
    scanf("%d", &num);

    last = num % 10;

    divisor = 1;
    while (num / divisor >= 10)
    {
        divisor = divisor * 10;
    }

    first = num / divisor;

    middle = (num % divisor) / 10;

    result = last * divisor + middle * 10 + first;

    printf("Number after swapping first and last digit = %d\n", result);

    return 0;
}