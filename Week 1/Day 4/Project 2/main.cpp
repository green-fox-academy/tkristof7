#include <iostream>
#include <string>

void greet(std::string);


int main(int argc, char* args[]) {



    // - Create a string variable named `al` and assign the value `Greenfox` to it
    // - Create a function called `greet` that greets it's input parameter
    // - Greeting is printing e.g. `Greetings dear, Greenfox`
    // - Greet `al`

    std::string a1 = "Greenfox";
    greet(a1);
    return 0;
}

void greet(std::string name){
    std::cout << " Greetings dear, " << name << std::endl;
}