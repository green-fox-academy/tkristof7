#include <iostream>
#include <string>
#include "Sharpie.h"

int main() {

    Sharpie blue("blue", 10);

    for (int i = 0; i < 10; i++) {
        std::cout << "Ink amount: " << blue.getInkAmount() << std::endl;
        blue.use();
    }
    return 0;
}