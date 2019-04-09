#include <iostream>
#include <string>
#include <vector>

int main() {

    std::vector<std::string> firstList;

    std::cout << firstList.size() << std::endl;
    firstList.push_back("William");
    std::cout << firstList.size() << std::endl;
    firstList.push_back("John");
    firstList.push_back("Amanda");

    std::cout << firstList.size() << std::endl;

    std::cout << firstList.at(2) << std::endl;

    std::vector<std::string>::iterator it;

    for (it = firstList.begin() ;it != firstList.end(); ++it) {
        std::cout << *it << std::endl;
    }

    for (int j = 0; j < firstList.size(); ++j) {
        std::cout << j + 1 << "." << firstList[j] << std::endl;
    }

    firstList.erase(firstList.begin() + 1);

    for (it = firstList.end(); it >=     firstList.begin(); --it) {
        std::cout << *it << std::endl;
    }

    firstList.clear();

    return 0;
}
