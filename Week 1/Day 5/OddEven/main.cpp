#include <iostream>
#include <string>

int main() {
    std::cout << "Please enter the number: " << std::endl;

    // Write a program that reads a number from the standard input,
    // Then prints "Odd" if the number is odd, or "Even" if it is even.


    int a;

    std::cin >> a;

    if (a % 2 == 0)

        std::cout << a << " is even" << std::endl;

    else std::cout << a << " is odd" << std::endl;


    return 0;
}
