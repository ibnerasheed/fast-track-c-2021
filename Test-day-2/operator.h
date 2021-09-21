#define INVALID -1
#define LOWER_LIMIT 1
#define ZERO 0

int add(int, int); // it adds two numbers and returns sum of two
                   // input parameters
int subtract(int, int);
int multiply(int x, int y);
int division(int, int);

int is_greater(int, int);

//Check if entered number is even or odd
int is_even(int);

int is_even_or_odd(int); // returns 1 if its even and 2 if it is odd

char grading(float); // it returns A scored 9-10; B:7-8; C:6; D:5; F < 5

int devisor(int number);

// Enter a 5 digit number and find the sum of its digits.

int sum_of_five_digits(int);
int sum_of_five_digits_modulus(int input);
int sum_of_five_digits_modulus_using_for(int input);

int is_prime_number(int);
//Generate the first 'N' prime numbers. For Eg. If N=5 then 2,3,5,7,11
int generate_first_n_prime_numbers(int);
