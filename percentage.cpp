#include <iostream>

using namespace std;

class SubjectMarks {
protected:
    int marksSubject1;
    int marksSubject2;
    int marksSubject3;

public:
    void getMarks() {
        cout << "Enter marks for Subject 1: ";
        cin >> marksSubject1;

        cout << "Enter marks for Subject 2: ";
        cin >> marksSubject2;

        cout << "Enter marks for Subject 3: ";
        cin >> marksSubject3;
    }
};

class TotalMarks : public SubjectMarks {
protected:
    int totalMarks;

public:
    void calculateTotal() {
        totalMarks = marksSubject1 + marksSubject2 + marksSubject3;
    }
};

class PercentageCalculator : public TotalMarks {
public:
    void calculatePercentage() {
        float percentage = static_cast<float>(totalMarks) / 3.0;
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

int main() {
    PercentageCalculator student;

    student.getMarks();
    student.calculateTotal();
    student.calculatePercentage();

    return 0;
}
