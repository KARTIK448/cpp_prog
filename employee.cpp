#include <iostream>
#include <vector>

using namespace std;

class Person {
protected:
    string name;
    string address;
    long long phone_no;

public:
    void getData() {
        cout << "Enter Name: ";
        getline(cin, name);

        cout << "Enter Address: ";
        getline(cin, address);

        cout << "Enter Phone Number: ";
        cin >> phone_no;
        cin.ignore(); // Consume newline character
    }

    void displayData() const {
        cout << "Name: " << name << endl;
        cout << "Address: " << address << endl;
        cout << "Phone Number: " << phone_no << endl;
    }
};

class Employee : public Person {
protected:
    int eno;
    string ename;

public:
    void getEmployeeData() {
        cout << "Enter Employee Number: ";
        cin >> eno;

        cin.ignore(); // Consume newline character

        cout << "Enter Employee Name: ";
        getline(cin, ename);
    }

    void displayEmployeeData() const {
        cout << "Employee Number: " << eno << endl;
        cout << "Employee Name: " << ename << endl;
    }
};

class Manager : public Employee {
private:
    string designation;
    string departmentName;
    double basicSalary;

public:
    void getManagerData() {
        cout << "Enter Designation: ";
        getline(cin, designation);

        cout << "Enter Department Name: ";
        getline(cin, departmentName);

        cout << "Enter Basic Salary: ";
        cin >> basicSalary;
    }

    void displayManagerData() const {
        cout << "Designation: " << designation << endl;
        cout << "Department Name: " << departmentName << endl;
        cout << "Basic Salary: " << basicSalary << endl;
    }

    double getBasicSalary() const {
        return basicSalary;
    }
};

int main() {
    int n;
    vector<Manager> managers;

    cout << "Enter the number of managers: ";
    cin >> n;
    cin.ignore(); // Consume newline character

    for (int i = 0; i < n; ++i) {
        Manager manager;
        cout << "\nEnter details for Manager " << i + 1 << ":\n";
        manager.getData();
        manager.getEmployeeData();
        manager.getManagerData();
        managers.push_back(manager);
    }

    double maxSalary = 0;
    int maxIndex = -1;

    for (int i = 0; i < n; ++i) {
        if (managers[i].getBasicSalary() > maxSalary) {
            maxSalary = managers[i].getBasicSalary();
            maxIndex = i;
        }
    }

    if (maxIndex != -1) {
        cout << "\nDetails of Manager with the Highest Salary:\n";
        managers[maxIndex].displayData();
        managers[maxIndex].displayEmployeeData();
        managers[maxIndex].displayManagerData();
    } else {
        cout << "\nNo managers entered.\n";
    }

    return 0;
}
