#include <iostream>
#include <string>

int main(int argc, char* args[]) {

    // string
    std::string welcome = "Hello, World";
    std::cout << welcome << std::endl;

    // boolean
    bool isAwesome = true;
    std::cout << isAwesome << std::endl;

    // whole number
    // integer (32 bit; min: -2 147 483 648; max: 2 147 483 647)
    int theMeaningOfLifeAndTheUniverseAndEverything = 42;
    std::cout << theMeaningOfLifeAndTheUniverseAndEverything << std::endl;

    // floating point number
    // double (64 bit, double precision IEEE 754)
    double pi = 3.141592;
    std::cout << pi << std::endl;

    // other mentioned types
    short s = 567;  // Short (16 bit; min: -32768 ; max: +32 767)
    long l = 3000000000; // long (64 bit; min: -9 223 372 036 854 775 808 ;max: 9 223 372 036 854 775 807)
    float f = 1.3f;

    // declaring a variable
    int number;

    // assigning a variable, (define its value)
    number = 12;

    // mutate a variable, (redefine its value)
    number = 23;

    return 0;
}