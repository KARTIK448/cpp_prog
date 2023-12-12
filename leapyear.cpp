#include <iostream>

class LeapYearChecker {
private:
    int year;

public:
    LeapYearChecker(int y) : year(y) {}

    bool isLeapYear() {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            return true;
        } else {
            return false;
        }
    }
};

int main() {
    int year;

    // Get the year from the user
    std::cout << "Enter a year: ";
    std::cin >> year;

    // Create an object of LeapYearChecker class
    LeapYearChecker leapYearObj(year);

    // Check if the year is a leap year
    if (leapYearObj.isLeapYear()) {
        std::cout << year << " is a leap year." << std::endl;
    } else {
        std::cout << year << " is not a leap year." << std::endl;
    }

    return 0;
}
