#include <stdio.h>
#include <stdlib.h>

int main()
{
    int binary, numBinary, base = 1, decimal = 0, remainder = 0;
    printf("Enter the binary number in  1s and 0s \n");
    scanf("%d", &binary);
    numBinary = binary;

    while(binary > 0)
    {
        remainder = binary % 10;
        decimal = decimal + remainder * base;
        binary = binary/10;
        base = base * 2;
    }

    printf("The decimal equivalent of %d is %d.\n", numBinary, decimal);
    return 0;
}
