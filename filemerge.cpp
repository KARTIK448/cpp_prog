#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void mergeFiles(const string& file1, const string& file2, const string& mergedFile) {
    ifstream inputFile1(file1);
    ifstream inputFile2(file2);
    ofstream outputFile(mergedFile);

    if (inputFile1.is_open() && inputFile2.is_open() && outputFile.is_open()) {
        string line;

        
        while (getline(inputFile1, line)) {
            outputFile << line << endl;
        }

        
        while (getline(inputFile2, line)) {
            outputFile << line << endl;
        }

        cout << "Files merged successfully." << endl;

        inputFile1.close();
        inputFile2.close();
        outputFile.close();
    } else {
        cerr << "Unable to open one or more files." << endl;
    }
}

int main() {
    string file1, file2, mergedFile;

    cout << "Enter the name of the first file: ";
    cin >> file1;

    cout << "Enter the name of the second file: ";
    cin >> file2;

    cout << "Enter the name of the merged file: ";
    cin >> mergedFile;

    mergeFiles(file1, file2, mergedFile);

    return 0;
}
