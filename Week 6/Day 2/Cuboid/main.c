#include <stdio.h>

int main()
{
    // Write a program that stores 3 sides of a cuboid as variables (doubles)
// You should get these variables via console input
// The program should write the surface area and volume of the cuboid like:
//
// Surface Area: 600
// Volume: 1000
    double a;
    double b;
    double c;

    printf("What is the length of your cuboid: \n");
    scanf("%lf", &a);
    printf("What is the width of your cuboid: \n");
    scanf("%lf", &b);
    printf("What is the height of your cuboid: \n");
    scanf("%lf", &c);

    double volume = a * b * c;
    printf("Volume: %lf\n", volume);

    double area = 2 * (a * b + b * c + c * a);
    printf("Surface Area: %lf\n", area);
    return 0;
}