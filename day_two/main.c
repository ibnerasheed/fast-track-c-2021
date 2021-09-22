#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number_sum = 0 , sum_total =0;
    printf("Enter the number to add the sum of it's digits: \n");
    scanf("%d" , & number_sum);
    sum_total = sum_of_digits( number_sum );
    printf ("The sum is : %d \n" , sum_total );

    int number_rev = 0 ,reverse_num = 0 ;
    printf("Enter the number to reverse: \n") ;
    scanf("%d" , & number_rev) ;
    reverse_num = reverse_number(number_rev);
    printf("The reverse numbe is: %d",reverse_num);

    return 0;
}
