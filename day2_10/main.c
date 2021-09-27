/*Write a C program to calculate the volume of the following shapes: Cube, Cuboid, Sphere,
 Cylinder and Cone. Ask the user which one s/he wants to calculate, and take the appropriate required inputs.
 Then print the result. The input should be taken in the main function and
 calculations for every solid should be done in a separate function by passing appropriate arguments */

#include <stdio.h>
#include <stdlib.h>
#define PIE 3.14

float cube()
{
        int side_of_cube;
        printf("Enter the value of side of cube.\n");
        scanf("%d", &side_of_cube);
        return side_of_cube * side_of_cube * side_of_cube;
}

float cuboid()
{
       int length, breadth, height;
       printf("Enter the value of length,breadth and height of the cuboid.\n");
       scanf("%d%d%d", &length, &breadth, &height);
       return length * breadth * height;
}

float sphere()
{
        int radius_sphere;
        printf("Enter the value of radius of sphere.\n");
        scanf("%d", &radius_sphere);
        return (PIE * radius_sphere * radius_sphere * radius_sphere * 4)/3;
}

float cylinder()
{
        int radius_cyl, height_cyl;
        float volume_cyl;
        printf("Enter the value of radius and height of cylinder. \n");
        scanf("%d%d", &radius_cyl, &height_cyl);
        volume_cyl =  PIE * height_cyl * radius_cyl * radius_cyl;
        return volume_cyl;
}

float cone()
{
        int radius_cone, height_cone;
        float volume_cone;
        printf("Enter the value of radius and height of cone. \n");
        scanf("%d%d", &radius_cone, &height_cone);
        volume_cone = (PIE * height_cone * radius_cone * radius_cone)/3;
        return volume_cone;
}

int main()
{
    int choice;
    float result1 = 0, result2 = 0, result3 = 0, result4 = 0, result5 = 0;
    printf("1.Enter 1 to calculate the volume of cube.\n");
    printf("2.Enter 2 to calculate the volume of cuboid.\n");
    printf("3.Enter 3 to calculate the volume of sphere.\n");
    printf("4.Enter 4 to calculate the volume of cylinder.\n");
    printf("5.Enter 5 to calculate the volume of cone.\n");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:

                result1 = cube();
                printf("The volume is :%f \n", result1);
                break;
        case 2:
                result2 = cuboid();
                printf("The volume is :%f \n", result2);
                break;

        case 3:
                result3 = sphere();
                printf("The volume is :%f \n", result3);
                break;

        case 4:
                result4 = cylinder();
                printf("The volume is :%f \n", result4);
                break;

        case 5:

                result5 = cone();
                printf("The volume is :%f \n", result5);
                break;

        default:
                printf("Enter valid options. \n");


    }



    return 0;



}
