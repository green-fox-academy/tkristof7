#include<stdio.h>

int main()
{
    // Write a program that prints a few details to the terminal window about you
    // It should print each detail to a new line.
    //  - Your name
    //  - Your age
    //  - Your height in meters (as a decimal fraction)
    //
    //  Use variables to store the informations!
    //
    //  Example output:
    //  John Doe
    //  31
    //  1.87

    int age= 22;
    double height =1.86;
    char name[]="Toth Kristof Peter";

    printf("My name is: %s\n My age is: %d\n My height is: %.2lf\n ",name, age, height);


    return 0;
}