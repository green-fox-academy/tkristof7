#include <iostream>
void counter (int);
int main() {

    int num;
    std::cout << "Type in an integer: " << std::endl;
    std::cin >> num;

    counter(num);

    return 0;
}

void counter(int count) {

    if (count >= 1) {
        std::cout<< count << std::endl;
        counter(count - 1);

    }
}