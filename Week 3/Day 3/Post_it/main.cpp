#include <iostream>
#include "PostIt.h"



int main() {

    PostIt p1("orange", "Idea1", "blue");
    PostIt p2("pink", "Awesome","black");
    PostIt p3("yellow", "Superb", "green");
    std::cout << p2.getBackgroundColor()<< std::endl;
    return 0;
}