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

int palindrome (int number )
{
    int result ;
    result = reverse_number (number);
    if ( result == number)
        return 1;
    else
        return 0;

}

/*int prime_gen (int count);
{

}*/

int armstrong (int number)
{
    int remainder , sum ,newNumber ;
    newNumber = number;
    while (number != 0)
    {
        remainder = newNumber % 10;
        sum += remainder * remainder * remainder;
        newNumber = newNumber / 10;

    }
    if (sum == number)
        return 1;
    else
        return 0;

}


