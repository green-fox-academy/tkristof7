#include <iostream>
#include <string>

int sum(int number);

int main(int argc, char *args[]) {
    int vari=6;
    std::cout << sum(vari)/2<<std::endl;
    // Write a function called `sum` that returns the sum of numbers from zero to the given parameter

    return 0;
}

int sum(int number) {
    int sim =0;
    for (int i = 0; i <= number; i++) {

        sim +=i;

    }
    return sim;
}

