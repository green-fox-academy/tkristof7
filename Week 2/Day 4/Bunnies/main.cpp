#include <iostream>

int earCounting(int bunnies);

int main() {
    int bunnies;

    std::cout << "Type number of the bunnies: ";
    std::cin >> bunnies ;
    std::cout << earCounting(bunnies) << std::endl;

    return 0;
}

int earCounting(int bunnies){

if (bunnies == 1){

    return 2;
}
else {

    return 2 + earCounting(bunnies - 1);
}
}