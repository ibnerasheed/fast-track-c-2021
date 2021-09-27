/*Write a recursive function for calculating factorial of a number.*/
#include <stdio.h>
#include <stdlib.h>

long int find_factorial(int n)
{
   if(n==0)
      return(1);

   return(n*find_factorial(n-1));
}
int main()
{
   int num;
   long int fact;
   printf("Enter any integer number:\n");
   scanf("%d",&num);
   fact = find_factorial(num);
   printf("Factorial of %d is: %ld \n", num, fact);

   return 0;
}
