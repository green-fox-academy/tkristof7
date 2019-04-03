#include <iostream>

int main(int argc, char *args[]) {

    std::string Name = "Kristof ";
    int age = 22;
    double height = 1.86;
    bool married = false;

    std::cout << " My name is " << Name << ", I am " <<
              age << " years old and " << height << " high " << married
              << std::endl;
    return 0;
}
