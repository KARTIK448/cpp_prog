#include <iostream>

using namespace std;

template<typename T>
class Calculator {
private:
    T num1;
    T num2;

public:
    Calculator(T n1, T n2) : num1(n1), num2(n2) {}

    T add() const {
        return num1 + num2;
    }

    T subtract() const {
        return num1 - num2;
    }

    T multiply() const {
        return num1 * num2;
    }

    T divide() const {
        if (num2 != 0) {
            return num1 / num2;
        } else {
            cerr << "Error: Cannot divide by zero." << endl;
            return 0;
        }
    }
};

int main() {
    float num1, num2;
    int n1,n2;
    int ch;

    cout << "Enter two floating point integers: ";
    cin >> num1 >> num2;

    Calculator<float> calculator(num1, num2);
    cout<<"select your operation:\n1) addition\n2) subtraction\n3) Multiplication\n4) Division\n";
    cin>>ch;

    switch(ch){
        case 1:
    cout << "Result of Addition: " << calculator.add() << endl;
    break;
    case 2:
    cout << "Result of Subtraction: " << calculator.subtract() << endl;
    break;
    case 3:
    cout << "Result of Multiplication: " << calculator.multiply() << endl;
    case 4:
    cout << "Result of Division: " << calculator.divide() << endl;
    break;
    }
    return 0;
}
