#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Define a structure to hold student information
struct Student {
    string name;
    int id;
    string department;
};

// Class to manage students
class StudentManagementSystem {
private:
    vector<Student> students;

public:
    // Function to add a new student
    void addStudent() {
        Student newStudent;
        cout << "Enter Student Name: ";
        cin.ignore();  // To clear the input buffer
        getline(cin, newStudent.name); // Input student name
        cout << "Enter Student ID: ";
        cin >> newStudent.id;  // Input student ID
        cout << "Enter Department: ";
        cin.ignore();  // To clear the input buffer
        getline(cin, newStudent.department); // Input student department

        students.push_back(newStudent); // Add the student to the list
        cout << "Student added successfully!" << endl;
    }

    // Function to display all students
    void displayAllStudents() {
        if (students.empty()) {
            cout << "No students available." << endl;
            return;
        }
        
        cout << "Displaying All Students:\n";
        for (const auto& student : students) {
            cout << "ID: " << student.id << ", Name: " << student.name
                 << ", Department: " << student.department << endl;
        }
    }

    // Function to search for a student by ID
    void searchStudentByID(int id) {
        bool found = false;
        for (const auto& student : students) {
            if (student.id == id) {
                cout << "Student Found:\n";
                cout << "ID: " << student.id << ", Name: " << student.name
                     << ", Department: " << student.department << endl;
                found = true;
                break;
            }
        }

        if (!found) {
            cout << "Student with ID " << id << " not found!" << endl;
        }
    }

    // Function to update student information
    void updateStudentInfo(int id) {
        bool found = false;
        for (auto& student : students) {
            if (student.id == id) {
                cout << "Student Found. Updating information...\n";
                cout << "Enter new Name: ";
                cin.ignore();
                getline(cin, student.name);
                cout << "Enter new Department: ";
                getline(cin, student.department);
                cout << "Student information updated successfully!" << endl;
                found = true;
                break;
            }
        }

        if (!found) {
            cout << "Student with ID " << id << " not found!" << endl;
        }
    }

    // Function to delete a student by ID
    void deleteStudent(int id) {
        bool found = false;
        for (auto it = students.begin(); it != students.end(); ++it) {
            if (it->id == id) {
                students.erase(it); // Remove the student from the list
                cout << "Student with ID " << id << " has been deleted successfully!" << endl;
                found = true;
                break;
            }
        }

        if (!found) {
            cout << "Student with ID " << id << " not found!" << endl;
        }
    }
};

// Main function to interact with the Student Management System
int main() {
    StudentManagementSystem sms;
    int choice, id;

    while (true) {
        // Display the menu to the user
        cout << "\nStudent Management System Menu:\n";
        cout << "1. Add a new student\n";
        cout << "2. Display all students\n";
        cout << "3. Search for a student by ID\n";
        cout << "4. Update student information\n";
        cout << "5. Delete a student\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                sms.addStudent();
                break;
            case 2:
                sms.displayAllStudents();
                break;
            case 3:
                cout << "Enter Student ID to search: ";
                cin >> id;
                sms.searchStudentByID(id);
                break;
            case 4:
                cout << "Enter Student ID to update: ";
                cin >> id;
                sms.updateStudentInfo(id);
                break;
            case 5:
                cout << "Enter Student ID to delete: ";
                cin >> id;
                sms.deleteStudent(id);
                break;
            case 6:
                cout << "Exiting system...\n";
                return 0;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    }

    return 0;
}
