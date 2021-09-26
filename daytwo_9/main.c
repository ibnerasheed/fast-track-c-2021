//Write a menu driven program to read two integers & find their sum, difference & product
#include <stdio.h>

int main()

{
    int number_one, number_two, choice;
    printf("Press 1 to add and enter the two numbers.\n");
    printf("Press 2 to substract and enter two numbers. \n ");
    printf("Press 3 to multiply and enter the two numbers \n");
    scanf("%d %d %d", &choice, &number_one, &number_two);

    switch(choice)
    {

        case 1:
                printf("Result: %d \n", number_one + number_two);
                break;

        case 2:
                printf("Result: %d \n", number_one - number_two);
                break;

        case 3:
                printf("Result: %d \n", number_one * number_two);
                break;

        default:
                printf("Enter the valid options. \n");

    }

    return 0;

}
