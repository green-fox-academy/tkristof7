#include <iostream>

int main(int argc, char* args[]) {

    int number = 7;

    if (number%2==0){
        std::cout << "Even" << std::endl;
    }else{
        std::cout <<"odd" << std::endl;
    }
    // Write a program that reads a number from the standard input,
    // Then prints "Odd" if the number is odd, or "Even" if it is even.

    return 0;
}