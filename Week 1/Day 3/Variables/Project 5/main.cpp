#include <iostream>

int main(int argc, char *args[]) {

    int currentHours = 14;
    int currentMinutes = 34;
    int currentSeconds = 42;

    // Write a program that prints the remaining seconds (as an integer) from a
    // day if the current time is represented by the variables

    int inputSecond;

    int hours, minutes, seconds;
    int remainingSeconds;

    int secondsInHour = 60 * 60;
    int secondsInMinute = 60;
    int oneDayInSeconds = 86400;
    remainingSeconds =
            oneDayInSeconds - (secondsInHour * currentHours + secondsInMinute * currentMinutes + currentSeconds);
    std::cout << "Remaining seconds of the day are: " << remainingSeconds << std::endl;


    return 0;

}
