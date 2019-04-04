#include <iostream>
using namespace std;

int main()
{
    int number;

    std::cout << " Enter a number Please : ";
    std::cin >> number;

    for (int i = 1; i <= 10; ++i) {
        std::cout << i << " * " << number << " = " << number * i << std::endl;
    }

    // Create a program that asks for a number and prints the multiplication table with that number
    //
    // Example:
    // The number 15 should print:
    //
    // 1 * 15 = 15
    // 2 * 15 = 30
    // 3 * 15 = 45
    // 4 * 15 = 60
    // 5 * 15 = 75
    // 6 * 15 = 90
    // 7 * 15 = 105
    // 8 * 15 = 120
    // 9 * 15 = 135
    // 10 * 15 = 150

    return 0;
}