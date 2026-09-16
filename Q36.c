#include <stdio.h>

int main()
{
    int a, b, hcf;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    hcf = 1;

    for (int i = 1; i <= a && i <= b; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            hcf = i;
        }
    }

    printf("HCF (GCD) = %d\n", hcf);

    return 0;
}