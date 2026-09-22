// Name: Muhammad Kaleem Sajjad
// Registration No: 544147
// Section: BSCS 15 E

// Task 2: Accessing a structure through a pointer
#include<iostream>
#include<string>
using namespace std;

struct Student{
    int rollNo;
    string name;
    float marks;
};

int main(){
    Student s;
    Student *p = &s; // pointer to the local student variable

    cout << "Enter roll number: ";
    cin >> p->rollNo; // arrow operator accesses member through pointer

    cout << "Enter full name: ";
    getline(cin >> ws, p->name);

    cout << "Enter marks: ";
    cin >> p->marks;

    cout << endl;
    cout << "--- Student Details ---" << endl;
    cout << "Roll No: " << p->rollNo << endl;
    cout << "Name: " << p->name << endl;
    cout << "Marks: " << p->marks << endl;
    cout << endl;

    float newMarks;
    cout << "Enter updated marks: ";
    cin >> newMarks;
    p->marks = newMarks; // update marks through the pointer

    cout << endl;
    cout << "--- Updated Student Details ---" << endl;
    cout << "Roll No: " << p->rollNo << endl;
    cout << "Name: " << p->name << endl;
    cout << "Marks: " << p->marks << endl;

    return 0;
}