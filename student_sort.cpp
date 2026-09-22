#include <iostream>
using namespace std;

int main()
{
int marks[5];
int totalStudents = 5;

cout << "Enter the marks of the 5 students:\n";
for (int i = 0; i < totalStudents; i++)
{
        cout << "Student " << (i + 1) << ": ";
        cin >> marks[i];
}

for (int i = 0; i < totalStudents - i ; i++)
{
for (int j = 0; j < totalStudents - i - 1 ; j++)
{
if (marks [j] < marks [j + 1])
{
int temp = marks[j];
marks[j] = marks[j+1];
marks[j+1] = temp;
}
}
}
cout << "\nStudents marks from highest to lowest :\n";
for (int i = 0; i < totalStudents; i++)
{
cout << "Rank " << (i + 1) << ": " << marks[i] << " marks" << endl;
}

return 0;
}
