#include <iostream>

int earCounting(int bunnies);
int main() {
    int bunnies;

    std::cout <<"Type number of bunnies: ";
    std::cin >> bunnies ;
    std::cout << earCounting(bunnies) << std::endl;
    return 0;
}int earCounting(int bunnies) {


    if (bunnies == 1) {

        return 2;

    } else if (bunnies % 2 == 0) {

        return earCounting(bunnies - 1) + 3;
    } else {

        return earCounting(bunnies - 1) + 2;
    }
}