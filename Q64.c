#include <stdio.h>

int main()
{
    long long num;
    int digit, i;
    int count[10] = {0};
    int maxCount = 0, maxDigit = 0;

    printf("Enter an integer: ");
    scanf("%lld", &num);

    if (num == 0)
    {
        count[0] = 1;
    }
    else
    {
        if (num < 0)
            num = -num;

        while (num != 0)
        {
            digit = num % 10;
            count[digit]++;
            num = num / 10;
        }
    }

    for (i = 0; i < 10; i++)
    {
        if (count[i] > maxCount)
        {
            maxCount = count[i];
            maxDigit = i;
        }
    }

    printf("Digit occurring most times = %d\n", maxDigit);
    printf("Number of occurrences = %d\n", maxCount);

    return 0;
}