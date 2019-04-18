#include <iostream>

#include "Fleet.h"

int main(int argc, char *args[]) {
    Fleet fleet;
    // Create a fleet of things to have this output:
    // 1. [ ] Get milk
    // 2. [ ] Remove the obstacles
    // 3. [x] Stand up
    // 4. [x] Eat lunch

    Thing getMilk("Get Milk");
    Thing removeTheObstacles("Remove the obstacles");
    Thing standup("Stand up");
    Thing eatlunch("Eat lunch");

    standup.complete();
    eatlunch.complete();

    fleet.add(getMilk);
    fleet.add(removeTheObstacles);
    fleet.add(standup);
    fleet.add(eatlunch);

    std::cout << fleet.toString() << std::endl;
    return 0;
}