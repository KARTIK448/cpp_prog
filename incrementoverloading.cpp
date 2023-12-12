#include <iostream>

using namespace std;

class Number {
private:
    int value;

public:
    Number(int val) : value(val) {}

    void display() const {
        cout << "Value: " << value << endl;
    }

    Number operator++() {
        ++value;
        return *this;
    }

    Number operator--() {
        --value;
        return *this;
    }
};

int main() {
    Number num(5);

    cout << "Original Value:" << endl;
    num.display();

    ++num;
    cout << "\nAfter Increment:" << endl;
    num.display();

    --num;
    cout << "\nAfter Decrement:" << endl;
    num.display();

    return 0;
}
