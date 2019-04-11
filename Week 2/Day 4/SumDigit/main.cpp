#include <iostream>

int sumDigits(int number);

int number;

int main() {
    std::cout << "Enter a number: " << std::endl;
    std::cin >> number;
    std::cout << sumDigits(number)<<std::endl;
    return 0;
}

int sumDigits(int number) {

    if (number % 10 == number) {

        return number % 10;
    }
    return number%10+sumDigits((number-number%10)/10);

}
