#include <iostream>
#include <string>

using namespace std;

class Player {
private:
    int playerNo;
    string playerName;
    int numMatches;
    int* goals;

public:
    Player(int no, const string& name, int matches) : playerNo(no), playerName(name), numMatches(matches) {
        goals = new int[numMatches];
        for (int i = 0; i < numMatches; ++i) {
            goals[i] = 0; // Initializing goals for each match to 0
        }
    }

    ~Player() {
        delete[] goals; // Deallocate memory for goals array
    }

    void setGoals(int matchNo, int numGoals) {
        if (matchNo >= 0 && matchNo < numMatches) {
            goals[matchNo] = numGoals;
        } else {
            cerr << "Invalid match number." << endl;
        }
    }

    void displayPlayerInfo() const {
        cout << "Player No.: " << playerNo << endl;
        cout << "Player Name: " << playerName << endl;
        cout << "Number of Matches: " << numMatches << endl;
        cout << "Goals in Each Match: ";
        for (int i = 0; i < numMatches; ++i) {
            cout << goals[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Player player1(1, "John", 5);
    
    player1.setGoals(0, 2);
    player1.setGoals(1, 1);
    player1.setGoals(2, 3);
    player1.setGoals(3, 0);
    player1.setGoals(4, 2);

    player1.displayPlayerInfo();

    return 0;
}
