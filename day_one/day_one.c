#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include "day_one.h"

//a program to calculate the area of circle

 float area_of_circle ( unsigned int radius )

{
    return PIE*radius*radius;

}

int even_or_odd ( int number ) //to find even or odd

{

    return number % 2;

}


 float celcius_to_fahrenheit ( float celcius )

 {
    return 1.8 * (celcius + 32);
 }

 float fahrenheit_to_celcius ( float fahrenheit )

 {
    return (fahrenheit - 32) * 1.8;
 }

 float simple_interest ( float principle , float rate , int time )

 {
     return (principle * rate * time) / 100;
 }

bool leap_year ( int year )
{
    if (year % 400 == 0)
        return true;

    if (year % 4 == 0)
        return true;

    if (year % 100 == 0)
        return false;

    else
        return false;
}

float compound_interest ( float principle_ci , float rate_ci , float time_ci )

{
    return principle_ci * pow( (1 + rate_ci/100 ) , time_ci );
}
