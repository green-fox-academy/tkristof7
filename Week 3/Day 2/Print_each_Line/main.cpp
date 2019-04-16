#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <vector>

int main() {
    // Write a program that opens a file called "my-file.txt", then prints
    // each line from the file.
    // You will have to create the file, you may use C-programming, although it is not mandatory
    std::ifstream myFile;
    myFile.open("../MyFile.txt");

    if (myFile.fail()) {
        std::cerr << "Error Opening File" <<std::endl;
    }
    std::string line;
    while (getline(myFile, line)){

        std::cout<< line << std::endl;
    }


    return 0;
}