#include <iostream>
#include <string>

int main(int argc, char *args[]) {
    int s[6] = {1, 2, 3, 8, 5, 6};

    s[3] = 4; // This is how to change an element.

    std::cout << s[3] << std::endl;


    // - Create an array variable named `s`
    //   with the following content: `[1, 2, 3, 8, 5, 6]`
    // - Change the 8 to 4
    // - Print the fourth element

    return 0;
}