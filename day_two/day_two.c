#include <stdio.h>
#include "day_two.h"

int sum_of_digits (int number)
{
    int sum = 0 , remainder = 0;
    while ( number > 0)
    {
        remainder = number % 10 ;
        sum = sum + remainder ;
        number = number / 10 ;

    }
    return sum ;
}

int reverse_number (int number)
{
    int remainder = 0 , reverse = 0 ;
    while ( number != 0)
    {
        remainder = number % 10 ;
        reverse =  reverse * 10 + remainder ;
        number = number / 10 ;
    }

    return reverse ;

}

int occurance_of_digits (int number , int digit)
{
    int count = 0 , remainder = 0 ;
    while ( number > 0)
    {
        remainder = number % 10 ;
        if ( remainder == digit)
            count++ ;
        number = number / 10 ;
    }
    return count ;


}

void palindrome (int number )
{
    int result ;
    result = reverse_number (number);
    if ( result == number)
        printf("It's palindrome \n");
    else
        printf("It's not a palindrome \n");
    return 0;
}

