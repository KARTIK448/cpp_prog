#include <iostream>
#include <string>

using namespace std;

class PlantDatabase {
private:
    string plantName;
    int plantCode;
    string plantType;
    double price;

public:
    PlantDatabase(const string& name, int code, const string& type, double plantPrice)
        : plantName(name), plantCode(code), plantType(type), price(plantPrice) {
        cout << "Plant data initialized." << endl;
    }

    ~PlantDatabase() {
        cout << "Plant data destroyed." << endl;
    }

    void displayPlantInfo() const {
        cout << "Plant Name: " << plantName << endl;
        cout << "Plant Code: " << plantCode << endl;
        cout << "Plant Type: " << plantType << endl;
        cout << "Price: $" << price << endl;
        cout << "-------------------------" << endl;
    }
};

int main() {
    int n;

    cout << "Enter the number of flowers: ";
    cin >> n;

    PlantDatabase* plantList = new PlantDatabase[n];

    for (int i = 0; i < n; ++i) {
        string name, type;
        int code;
        double price;

        cout << "\nEnter details for Flower " << i + 1 << ":" << endl;

        cout << "Enter Plant Name: ";
        cin.ignore(); 
        getline(cin, name);

        cout << "Enter Plant Code: ";
        cin >> code;

        cout << "Enter Plant Type: ";
        cin.ignore();
        getline(cin, type);

        cout << "Enter Price: $";
        cin >> price;

        plantList[i] = PlantDatabase(name, code, type, price);
    }

    cout << "\nPlant Database:\n";

    for (int i = 0; i < n; ++i) {
        plantList[i].displayPlantInfo();
    }

    delete[] plantList;

    return 0;
}
