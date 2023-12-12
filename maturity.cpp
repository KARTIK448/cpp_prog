#include <iostream>
#include <string>

using namespace std;

class FDAccount {
private:
    int fdNo;
    string name;
    double amount;
    double interestRate;
    double maturityAmt;
    int numMonths;

public:
    FDAccount(int fdNo, const string& name, double amount, int numMonths, double interestRate = 0.05)
         {
            this->fdNo=fdNo;
            this->name=name;
            this->amount=amount;
            this->numMonths=numMonths;
            calculateMaturityAmount();
    }

    void calculateMaturityAmount() {
        maturityAmt = amount + (amount * interestRate * numMonths) / 12;
    }

    void displayDetails() const {
        cout << "FD Number: " << fdNo << endl;
        cout << "Account Name: " << name << endl;
        cout << "Deposit Amount: " << amount << endl;
        cout << "Interest Rate: " << interestRate << endl;
        cout << "Number of Months: " << numMonths << endl;
        cout << "Maturity Amount: " << maturityAmt << endl;
    }
};

int main() {
    FDAccount fd1(12345, "John Doe", 10000.0, 12);
    fd1.displayDetails();

    cout << "\n";

    FDAccount fd2(54321, "Jane Doe", 15000.0, 24, 0.06);
    fd2.displayDetails();

    return 0;
}
