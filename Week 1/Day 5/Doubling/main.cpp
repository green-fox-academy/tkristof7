#include <iostream>
#include <string>

int doubling(int number);

int main(int argc, char *args[]) {
    int baseNum = 123;

    // - Create an integer variable named `baseNum` and assign the value `123` to it
    // - Create a function called `doubling` that doubles it's input parameter and returns with an integer
    // - Print the result of `doubling(baseNum)`
    doubling(baseNum); // doubling(baseNum); ezt akár el is hagyhatjuk.
    std::cout << doubling(baseNum) << std::endl;
    return 0;
}

int doubling(int number) {
    number *= 2;
    return number;
}