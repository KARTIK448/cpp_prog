#include <iostream>

class Adder {
private:
    int num1;
    int num2;
    int *ptr1, *ptr2;

public:
    Adder(int n1, int n2) : num1(n1), num2(n2) {}

    int addNumbers() {
        ptr1=&num1;
        ptr2=&num2;

        int sum = *ptr1+*ptr2;
        return sum;
    }
};

int main() {
    int number1, number2;

    // Get user input for two numbers
    std::cout << "Enter the first number: ";
    std::cin >> number1;

    std::cout << "Enter the second number: ";
    std::cin >> number2;

    // Create an object of the Adder class
    Adder adderObj(number1, number2);

    // Calculate and display the sum using pointers
    std::cout << "Sum of " << number1 << " and " << number2 << " is: " << adderObj.addNumbers() << std::endl;

    return 0;
}
