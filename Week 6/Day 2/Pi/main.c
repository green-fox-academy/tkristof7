#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "area.h"

// define a variable called PI with the value of 3.14
// create a function which takes the radius of a circle as a parameter
// and return the area of that cirle
// area = radius * radius * PI

int main()
{
    srand(time(NULL));
    int radius =rand()%20;
    double area = areaOfCircle(radius);
    printf("The area of a circle with a radius of %d is: %.3\n", radius, area);

    double circumference = circumferenceOfCircle(radius);
    printf("Ther circumference of a circle with a radius of %d is: %.3\n", radius, circumference);


    return 0;
}