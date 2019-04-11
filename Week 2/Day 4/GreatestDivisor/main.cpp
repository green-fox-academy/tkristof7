#include <iostream>

int greatestCommonDivisor(int a, int b);


int main() {

    int a;
    int b;
    std::cout << " Enter a number: " << std::endl;
    std::cin >> a;
    std::cout << " Enter another number: " << std::endl;
    std::cin >> b;
    std::cout << greatestCommonDivisor(a, b)  << std::endl;
    return 0;
}

int greatestCommonDivisor(int a, int b) {
    if (a == b) {
        return a;
    }
    if (a > b)
        return greatestCommonDivisor(a - b, b);

    return greatestCommonDivisor(a, b - a);
}