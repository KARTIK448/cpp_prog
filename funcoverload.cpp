#include <iostream>

using namespace std;


void displayMessage(string message) {
    cout << "Message: " << message << endl;
}


void displayMessage(string message, int count) {
    cout << "Message: " << message << " (Count: " << count << ")" << endl;
}


void displayMessage(string message, int count, bool isEnabled) {
    cout << "Message: " << message << " (Count: " << count << ", Enabled: " << boolalpha << isEnabled << ")" << endl;
}

int main() {
    displayMessage("Hello");
    displayMessage("Welcome", 3);
    displayMessage("Error", 5, true);

    return 0;
}
