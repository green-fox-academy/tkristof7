#include <iostream>
#include <string>

int main(int argc, char *args[]) {

    int a = 3;
    a = a + 10;
    // make the "a" variable's value bigger by 10

    std::cout << a << std::endl;

    int b = 100;
    b = b - 94;
    // make b smaller by 7

    std::cout << b << std::endl;

    int c = 44;
    c = c * 2;
    // please double c's value

    std::cout << c << std::endl;

    int d = 125;
    d = d / 5;
    // please divide by 5 d's value

    std::cout << d << std::endl;

    int e = 8;
    e = e*e*e;
    // please cube of e's value

    std::cout << e << std::endl;

    int f1 = 123;
    int f2 = 345;
    std::cout << (f1>f2) << std::endl;

    // tell if f1 is bigger than f2 (print as a boolean)

    int g1 = 350;
    int g2 = 200;
    std::cout << (g1>g2*2) << std::endl;
    // tell if the double of g2 is bigger than g1 (print as a boolean)

    int h = 135798745;
    std::cout << (h%11==0) << std::endl;
    // tell if it has 11 as a divisor (print as a boolean)

    int i1 = 10;
    int i2 = 3;
    std::cout << (i1>i2*i2 && i1<i2*i2*i2) <<std::endl;
    // tell if i1 is higher than i2 squared and smaller than i2 cubed (print as a boolean)

    int j = 1521;
    std::cout << (j % 3==0 && j % 5==0);
    // tell if j is dividable by 3 or 5 (print as a boolean)

    return 0;
}