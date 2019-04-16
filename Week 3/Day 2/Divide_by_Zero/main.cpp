#include <iostream>
#include <fstream>

void divide(int a);

int main() {
    // Create a function that takes a number
    // divides ten with it,
    // and prints the result.
    // It should print "fail" if the parameter is 0

divide(0);

    return 0;
}

void divide(int a) {

    try {

        int b = 10;

        if (a == 0) {
            throw 123;
        }
        std::cout << b / a << std::endl;
    } catch (int a) {
        std::cout << "fail" << std::endl;

    }
}
