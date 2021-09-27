/*Write a recursive function for calculating power of a number. Take base number and exponent from user.*/

#include <stdio.h>

int power(int base, int exp)
{
    if (exp != 0)
        return (base * power(base, exp - 1));
    else
        return 1;
}

int main()
{
    int base, exponent, result;
    printf("Enter base number: ");
    scanf("%d", &base);
    printf("Enter power number(positive integer): ");
    scanf("%d", &exponent);
    result = power(base, exponent);
    printf("%d^%d = %d", base, exponent, result);

    return 0;
}
