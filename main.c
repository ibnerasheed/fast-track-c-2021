#include <stdio.h>
#include <stdlib.h>
#include "day_one.h"


int main()
{
    unsigned int radius;
    int number ; //to take input for even or odd
    float area ;
    printf( " \n  Enter the radius of circle you want to calculate \n");
    scanf ( "%d" , &radius );
    area = area_of_circle ( radius );
    printf ("the area is %f",area);


    printf( " \n  Enter the integer to know even or odd \n");
    scanf ("%d",&number);
    if ( even_or_odd(number) == 0 )
    {
        printf(" %d is even " , number);

    }

    else
    {
         printf ("%d is odd  ", number);
    }

    int year ;
    bool result_leap;
    printf( " \n  Enter the year to know leap year or not \n");
    scanf ("%d", &year);
    result_leap = leap_year(year);
    printf ("\n the year is %d" , result_leap);

    float principle_c , rate_c , time_c , compound;
    printf("\nEnter principle,rate and time to calculate");
    scanf("%f %f %f" , &principle_c ,&rate_c ,&time_c);
    compound = compound_interest(principle_c , rate_c , time_c);
    printf("The compound Interest is %f", compound);








    return 0;
}
