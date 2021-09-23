#include <stdio.h>
#include <stdlib.h>
#include "day_two.h"

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
    printf("The reverse number is: %d \n",reverse_num);

    int number_occurance , digit_desired , result ;
    printf("Enter the number to and digit to know the occurance.\n");
    scanf("%d %d" , &number_occurance , &digit_desired);
    result = occurance_of_digits ( number_occurance , digit_desired);
    printf("The occurance of %d is %d times \n", digit_desired , result);

    int num_palindrome , result_palindrome;
    printf("Enter the number to know if it is palindrome or not: \n");
    scanf("%d" , &num_palindrome);
    result_palindrome = palindrome ( num_palindrome);
    if (result_palindrome == 1)
        printf("The number is palindrome. \n");
    else
        printf("The number is not a palindrome. \n");

    int number_armstrong, result_arm;
    printf("Enter three digit number to check if it's armstrong number or not : \n ");
    scanf("%d", &number_armstrong) ;
    result_arm = armstrong(number_armstrong);
    if (result_arm == 1)
        printf("The number is palindrome.\n");
    else
        printf("The number isn't armstrong number. \n");


    return 0;
}
