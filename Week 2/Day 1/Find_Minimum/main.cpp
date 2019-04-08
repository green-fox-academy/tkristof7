
#include <iostream>

int *arrayMinimumScanning(int array[], int sizeofArray);

int main() {
    // Create a function which takes an array (and its length) as a parameter
    // and returns a pointer to its minimum value

    int numbers[] = {12, 4, 66, 101, 87, 3, 15};

    *arrayMinimumScanning(numbers, 7);
    std::cout << *arrayMinimumScanning(numbers, 7) << std::endl;
    return 0;
}


int *arrayMinimumScanning(int array[], int sizeofArray) {

    int *minimumPointer = array;

    for (int i = 0; i < sizeofArray; ++i) {

        if (array[i] < *minimumPointer) {
            minimumPointer = &array[i];
        }

    }

    return minimumPointer;

}

