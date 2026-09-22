// Name: Muhammad Kaleem Sajjad
// Registration No: 544147
// Section: BSCS 15 E

// Task 1: Creating a structure
#include<iostream>
#include<string>
using namespace std;

// Student struct holds roll number, name, and marks
struct Student{
    int rollNo;
    string name;
    float marks;
};

int main() {
    Student s; // declare a single student variable on the stack

    cout << "Enter roll number: ";
    cin >> s.rollNo;

    cout << "Enter full name: ";
    getline(cin >> ws, s.name); // ws skips leftover whitespace before name

    cout << "Enter marks: ";
    cin >> s.marks;

    // display all fields with dot operator
    cout << endl;
    cout << "--- Student Details ---" << endl;
    cout << "Roll No: " << s.rollNo << endl;
    cout << "Name: " << s.name << endl;
    cout << "Marks: " << s.marks << endl;

    return 0;
}
