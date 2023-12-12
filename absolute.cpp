#include <iostream>

using namespace std;

int absoluteValue(int num) {
    return (num < 0) ? -num : num;
}

float absoluteValue(float num) {
    return (num < 0) ? -num : num;
}

int main() {
    int intValue;
    float floatValue;

    cout << "Enter an integer: ";
    cin >> intValue;
    cout << "Absolute value of the integer: " << absoluteValue(intValue) << endl;

    cout << "Enter a float: ";
    cin >> floatValue;
    cout << "Absolute value of the float: " << absoluteValue(floatValue) << endl;

    return 0;
}