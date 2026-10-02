#include <stdio.h>

int main()
{
    long long n, x;
    long long low, high, mid;
    long long total;

    printf("Enter a positive integer: ");
    scanf("%lld", &n);

    total = n * (n + 1) / 2;

    low = 1;
    high = n;

    while (low <= high)
    {
        mid = low + (high - low) / 2;

        if (mid * mid == total)
        {
            printf("%lld\n", mid);
            return 0;
        }
        else if (mid * mid < total)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    printf("-1\n");

    return 0;
}