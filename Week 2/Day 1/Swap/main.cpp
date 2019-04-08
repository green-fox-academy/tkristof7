#include <iostream>

void swapMachine(int *aPointer, int *bPointer);

int main() {
    // Create a function which swaps the values of 'a' and 'b'
    // This time use a void function and pointers

    int a = 10;
    int b = 316;

    std::cout << a << " "<< b << std::endl;
    swapMachine(&a, &b);
    std::cout << a << " swapped to " << b << std::endl;
    return 0;
}

void swapMachine(int *aPointer, int *bPointer) {

    int c = *aPointer;
    *aPointer = *bPointer;
    *bPointer = c;
}