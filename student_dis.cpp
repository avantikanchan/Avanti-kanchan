#include <iostream>
using namespace std;

int main() {
    // Array to store roll numbers of 5 students
    int rollNumbers[5];

    // Input loop
    cout << "Enter the roll numbers of 5 students:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Student " << (i + 1) << ": ";
        cin >> rollNumbers[i];
    }

    // Output loop
    cout << "\n--- Displaying Roll Numbers ---" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Roll number of Student " << (i + 1) << " is: " << rollNumbers[i] << endl;
    }

    return 0;
}
