#include<assert.h>

#include "operator.h"
#define EVEN 1
#define ODD 2
void test_add();
void test_is_greater();
void test_grade();

int main()
{
    test_add(); // testing for adding two positive numbers

    //test_is_greater(); // check whether first number is greater than second

    assert(is_even_or_odd(9) == ODD);
    assert(is_even_or_odd(26) == EVEN);

    test_grade();

    assert(devisor(10) == 1);
    assert(devisor(9) == 2);
    assert(devisor(25) == 3);
    assert(devisor(17) == -1);

    assert(sum_of_five_digits(13457) == 20);
    assert(sum_of_five_digits(12345) == 15);
    assert(sum_of_five_digits(10001) == 2);
    assert(sum_of_five_digits(10000) == 1);


    assert(sum_of_five_digits_modulus_using_for(13457) == 20);
    assert(sum_of_five_digits_modulus_using_for(12345) == 15);
    assert(sum_of_five_digits_modulus_using_for(10001) == 2);
    assert(sum_of_five_digits_modulus_using_for(10000) == 1);


    assert(is_prime_number(2) == 1);
    assert(is_prime_number(3) == 1);
    assert(is_prime_number(9) == 0);
    assert(is_prime_number(49) == 0);
    assert(is_prime_number(11) == 1);
    assert(is_prime_number(13) == 1);

    assert(generate_first_n_prime_numbers(100) == 100);

    return 0;
}


void test_grade()
{
    assert(grading(9) == 'A');
    assert(grading(10) == 'A');
    assert(grading(8) == 'B');
    assert(grading(7) == 'B');
    assert(grading(6) == 'C');
    assert(grading(5.5) == 'D');
    assert(grading(12) == 'I');
    assert(grading(4) == 'F');
    assert(grading(-2) == 'I');

}



void test_is_greater()
{
    assert(is_greater(10, 5) == 1);
    assert(is_greater(7,23) == 0);
}

void test_add()
{


 //   static int x = 50;
    assert(add(5,6) == 11);
    assert(add(-5, -5) == INVALID);


    assert(add(-7,9) == INVALID);


    assert(add(10,-4) == INVALID);


}

