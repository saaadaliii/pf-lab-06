#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    int rollNumber;
    int marks[3];
};

void addStudent(Student &s) {
    cout << "Enter Name: ";
    cin>>s.name;
    cout << "Enter Roll Number: ";
    cin >> s.rollNumber;
    cout << "Enter Marks for 3 subjects: ";
    for (int i=0; i<=2; i++) {
        cin >> s.marks[i];
    }
    cout << "Student details added successfully!\n";
}

int calculateTotalMarks(const Student s) {
    int total = 0;
    for (int i=0; i<=2; i++) {
        total += s.marks[i];
    }
    return total;
}

void displayStudent(const Student s) {
    cout << "Student Details:"<<endl;
    cout << "Name: " << s.name << endl;
    cout << "Roll Number: " << s.rollNumber << endl;
    cout << "Marks: ";
    for (int i=0; i<=2; i++) {
        cout << s.marks[i] << " ";
    }
    cout << "\nTotal Marks: " << calculateTotalMarks(s) << endl;
}

int main() {
    Student s;
    addStudent(s);
    displayStudent(s);
    return 0;
}
