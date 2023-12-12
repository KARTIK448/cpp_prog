#include <iostream>

using namespace std;

class Circle {
private:
    double radius;

public:
    void acceptRadius() {
        cout << "Enter the radius of the circle: ";
        cin >> radius;
    }

    double calculateArea() {
        return 3.14 * radius * radius; // Assuming pi is approximately 3.14
    }

    void displayResult(double area) {
        cout << "The area of the circle with radius " << radius << " is: " << area << endl;
    }
};

int main() {
    Circle circle;

    circle.acceptRadius();

    double area = circle.calculateArea();

    circle.displayResult(area);

    return 0;
}
