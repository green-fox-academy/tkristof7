#include <iostream>

int main() {
    // Add two numbers using pointers

    int a = 20;
    int b = 17;

    int *aPointer = &a;
    int *bPointer = &b;

    int sum = 0;
    int *sumPointer = &sum;
    *sumPointer = *aPointer + *bPointer;
    std::cout << *sumPointer << std::endl;

    return 0;
}