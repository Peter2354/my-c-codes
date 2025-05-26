#include<iostream>
#include<fstream>
#include<iomanip>
#include<string>
using namespace std;
void studentsdetails() {
    string Name[20];
    int id[20];
    int marks[20];

    cout << left << setw(15) << "Name" << setw(10) << "ID" << setw(10) << "Marks" << endl;
    cout << string(35, '-') << endl;

    cout << "Enter details for 20 students:\n";

    for (int i = 0; i < 20; i++) {
        cout << "\nStudent " << i + 1 << ":\n";
        cout << "Name: ";
        cin >> Name[i];
        cout << "ID: ";
        cin >> id[i];
        cout << "Marks: ";
        cin >> marks[i];
    }

    ofstream file("student_details.txt", ios::app);
    if (!file) {
        cerr << "Error: while trying to open the file";
        return;
    }

    file << left << setw(15) << "Name" << setw(10) << "ID" << setw(10) << "Marks" << endl;
    file << string(35, '-') << endl;

    for (int i = 0; i < 20; i++) {
        file << left << setw(15) << Name[i] << setw(10) << id[i] << setw(10) << marks[i] << endl;
    }

    file.close();
    cout << "\nStudent details were saved successfully.";
}

int main() {
    studentsdetails();
    return 0;
}
