#include <iostream>
#include <string>

int doubling (int baseNum  ){
    return baseNum * 2;

}
int main(int argc, char* args[]) {



    // - Create an integer variable named `baseNum` and assign the value `123` to it
    // - Create a function called `doubling` that doubles it's input parameter and returns with an integer
    // - Print the result of `doubling(baseNum)`

    int baseNum = 123;
    std::cout << " result of " << (doubling(baseNum)) << std::endl;

    return 0;
}