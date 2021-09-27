//Find square of a number using macros.

#include <stdio.h>
#include <stdlib.h>
#define SQUARE(X) (X * X)
int main()
{
    int number;
    printf("Enter the number you want to get squared.\n");
    scanf("%d", &number);
    printf("SQUARE(%d) = %d\n", number, SQUARE(number));
    return 0;
}
