#include <iostream>
#include <fstream>
#include <string>
using namespace std;
class Student
{
    public:
    string name;
    int rollNumber;
    float marks;
};

void addStudentRecord()
{
    ofstream file;
    
    file.open("student_database.txt", ios::app);

    if (!file)
    {
        cout << "Error opening file!" << endl;
        return;
    }

    Student student;

    cout << "Enter student name: ";
    getline(cin, student.name);

    cout << "Enter roll number: ";
    cin >> student.rollNumber;

    cout << "Enter marks: ";
    cin >> student.marks;

    file <<"student name:"<< student.name<<"\n"<<"Roll no: "<< student.rollNumber<<"\n" <<"Marks:" << student.marks << endl;

    file.close();

    cout << "Student record added successfully!" << endl;
}

// Function to display all student records from the database
void displayStudentRecords()
{
    ifstream file;
    file.open("student_database.txt");

    if (!file)
    {
        cout << "Error opening file!" << endl;
        return;
    }

    string line;

    while (getline(file, line))
    {
        cout << line << endl;
    }

    file.close();
}

int main()
{
    int choice;

    do
    {
        cout << "Student Database" << endl;
        cout << "1. Add Student Record" << endl;
        cout << "2. Display Student Records" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        cin.ignore();

        switch (choice)
        {
        case 1:
            addStudentRecord();
            break;
        case 2:
            displayStudentRecords();
            break;
        case 3:
            cout << "Exiting..." << endl;
            break;
        default:
            cout << "Invalid choice! Please try again." << endl;
            break;
        }

        cout << endl;
    } while (choice != 3);

    return 0;
}