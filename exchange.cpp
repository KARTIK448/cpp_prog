#include <iostream>

using namespace std;

class SecondClass;

class FirstClass {
private:
    int privateValue1;

public:
    FirstClass(int val) : privateValue1(val) {}

    friend void exchangeValues(FirstClass&, SecondClass&);
    
    void display() const {
        cout << "FirstClass: PrivateValue1 = " << privateValue1 << endl;
    }
};

class SecondClass {
private:
    int privateValue2;

public:
    SecondClass(int val) : privateValue2(val) {}

    friend void exchangeValues(FirstClass&, SecondClass&);
    
    void display() const {
        cout << "SecondClass: PrivateValue2 = " << privateValue2 << endl;
    }
};

void exchangeValues(FirstClass& obj1, SecondClass& obj2) {
    int temp = obj1.privateValue1;
    obj1.privateValue1 = obj2.privateValue2;
    obj2.privateValue2 = temp;
}

int main() {
    FirstClass obj1(10);
    SecondClass obj2(20);

    cout << "Before exchanging values:" << endl;
    obj1.display();
    obj2.display();

    exchangeValues(obj1, obj2);

    cout << "\nAfter exchanging values:" << endl;
    obj1.display();
    obj2.display();

    return 0;
}
