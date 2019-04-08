#include <iostream>

int main()
{
    int storeArray [5];

    for (int i = 0; i <5; ++i) {
        std::cout << i+1 <<". number " << std::endl;
        std::cin >> storeArray[i];
    }
    
    // Create a program which accepts five integers from the console (given by the user)
    // and store them in an array
    // print out the memory addresses of the elements in the array


    return 0;
}