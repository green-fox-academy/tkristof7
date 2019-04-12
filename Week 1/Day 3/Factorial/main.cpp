#include <iostream>
#include <string>

int factorio(int number);

int main(int argc, char *args[]) {

    // - Create a function called `factorio`
    //   it should calculate its input's factorial.
    //   it should not return it, but take an additional integer parameter and overwrite its value.
    int num = 7;
    std::cout << factorio(5) << std::endl;
    std::cout << factorio(num) << std::endl;
    return 0;
}

int factorio(int number) {
    int factor = 1;
    for (int i = 1; i <= number; ++i) {
        factor = factor * i;

    }
    return factor;
}

