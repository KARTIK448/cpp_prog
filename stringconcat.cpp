#include <iostream>
#include <string>

using namespace std;

class StringConcatenator {
private:
    string str;

public:
    StringConcatenator() : str("") {}

    StringConcatenator operator+(const StringConcatenator& other) {
        StringConcatenator result;
        result.str = this->str + other.str;
        return result;
    }

    void displayString() const {
        cout << "Concatenated String: " << str << endl;
    }

    void setString(const string& s) {
        str = s;
    }
};

int main() {
    StringConcatenator str1, str2, result;

    cout << "Enter the first string: ";
    string inputStr1;
    getline(cin, inputStr1);
    str1.setString(inputStr1);

    cout << "Enter the second string: ";
    string inputStr2;
    getline(cin, inputStr2);
    str2.setString(inputStr2);

    result = str1 + str2;

    cout << "\nResult:\n";
    result.displayString();

    return 0;
}
