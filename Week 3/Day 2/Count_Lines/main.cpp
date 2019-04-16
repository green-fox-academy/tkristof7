#include <iostream>
#include <fstream>

using namespace std;

int number_of_lines(std::string);

int main() {
// Write a function that takes a filename as string,
    // then returns the number of lines the file contains.
    // It should return zero if it can't open the file

    cout << "number of lines in text file: " << number_of_lines("../MyFile.txt") << endl;
    return 0;
}

int number_of_lines(std::string filename) {
    string line;
    int lines = 0;
    ifstream myfile(filename);

    if (myfile.is_open()) {

        while (!myfile.eof()) {

            getline(myfile, line);
            lines++;
        }
        myfile.close();
        return lines;
    } else {
        return 0;
    }

}


