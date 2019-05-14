#include<stdio.h>

int main()
{
    // Create a program that prints a few operations on two numbers: 22 and 13

    // Print the result of 13 added to 22
    int a = 22;
    int b = 13;

    int c = a + b;
    printf("Sum of the numbers: %d\n", c);
    // Print the result of 13 substracted from 22
    float c1 = (float) b - a;
    printf("Sum of the numbers: %.2f\n", c1);
    // Print the result of 22 multiplied by 13
    int c2 = a * b;
    printf("Sum of the numbers: %d\n", c2);
    // Print the result of 22 divided by 13 (as a decimal fraction)
    float c3 = (float) a / b;
    printf("Sum of the numbers: %.2f\n", c3);
    // Print the reminder of 22 divided by 13
    int c4 = a % b;
    printf("Sum of the numbers: %d\n", c4);
    // Store the results in variables and use them when you display the result

    return 0;
}