#include<stdio.h>
#include "operator.h"

int add(int x, int y)
{
    if(x < LOWER_LIMIT || y < LOWER_LIMIT)
        return INVALID;
    return x+y;
}



int subtract(int x, int y)
{
    return x - y;
}

int multiply(int x, int y)
{
    return x * y;
}

int division(int x, int y)
{
    if(ZERO == y)
        return INVALID;
    return x/y;
}

int is_greater(int x, int y) // x = 10; y =20 then it returns 0 else 1
{
    return x > y;
}

int is_even(int x) // return 1 if even and return 2 if its odd
{
    return x%2;
}

int is_even_or_odd(int number)
{
    if(number % 2 == 0)
        return 1;
    else
        return 2;
}

int devisor(int number)
{
    if(number % 2 == 0)
        return 1;
    else if(number % 3 == 0)
        return 2;
    else if(number % 5 == 0)
        return 3;
    return -1;
}

char grading(float fcgpa)
{
    char grade;

    int cgpa;

    if(fcgpa > 10 || fcgpa < 0)
        return 'I';

    cgpa = fcgpa;

    switch(cgpa)
    {
        case 10:
        case 9:
            grade = 'A';
            break;
        case 8:
        case 7:
            grade = 'B';
            break;
        case 6:
            grade = 'C';
            break;
        case 5:
            grade = 'D';
            break;
        default:
            grade = 'F';
            break;
    }

    return grade;
}

int sum_of_five_digits(int input)
{
    // Input number is 13457; expected output 20
    int sum = 0;
    int power = 10000, reminder, digit_in_hand;


    while(power != 0)
    {
        reminder = input % power;
        digit_in_hand = input/ power;
        sum = sum + digit_in_hand;
        input = reminder;
        power = power / 10;
    }
    return sum;
}

int sum_of_five_digits_modulus(int input)
{
    // input = 12345;
    int reminder, sum = 0;

    while(input != 0)
    {
        reminder = input % 10; // get the last digit
        sum = sum + reminder; // add the digit to sum
        input = input / 10;  // remove the last digit

    }
     return sum;
}


int sum_of_five_digits_modulus_using_for(int input)
{
    // input = 12345;
    int sum;

    for(sum = 0; input != 0; input = input / 10)
        sum = sum + input % 10;

    return sum;
}

int is_prime_number(int input)
{
    int i; // flag = 0;

    for(i=2; i <= input/2; i++)
    {
        if(input % i == 0)
            return 0; // or flag = 1;
    }

    return 1;

  /*  if(flag == 0)
        return 1;
    else
        return 0;
    */
}
// If limit = 6; we are suppose to find 2,3,5,7,11,13
int generate_first_n_prime_numbers(int limit)
{
    int count = 0, input = 2;

    while(count < limit)
    {
        if(is_prime_number(input)){ // check if it is a prime number
            count++; // keep track of prime numbers
            printf("%d \t", input); // display the prime number
        }

        input++; // choosing next number
    }

    return count;
}
