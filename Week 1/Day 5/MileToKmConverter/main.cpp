#include <iostream>

double kmtomiles(int kilometer);

int valami(int a);

int azta(int a);

int meglesz(int d);

int main(int argc, char *args[]) {
    int km;

    std::cout << " Tell me the number" << std::endl;
    std::cin >> km;
    double kilo = kmtomiles(km);
    std::cout << kilo << " , " << kmtomiles(km) << std::endl;
    // Write a program that asks for an integer that is a distance in kilometers,
    // then it converts that value to miles and prints it
    std::cout << valami(km) << std::endl;
    std::cout << azta(km) << std::endl;
    std::cout << meglesz(km) << std::endl;
    return 0;
}

double kmtomiles(int kilometer) {
    double miles = kilometer * 0.68;

    return miles;
}

int valami(int a) {
    a *= 2;
    return a;
}

int azta(int a) {
    int b = a *= 3;
    b += 2;
    b *= 2;
    return b;
}

int meglesz(int d) {
    int k = *4;
    k =/2;
    k = +15
    return k;
}
