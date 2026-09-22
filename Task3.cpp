// Name: Muhammad Kaleem Sajjad
// Registration No: 544147
// Section: BSCS 15 E

// Task 3: Creating a record dynamically
#include<iostream>
#include<string>
using namespace std;

struct Student{
    int rollNo;
    string name;
    float marks;
};

int main(){
    Student* p = new Student{}; // allocate one Student on the heap

    cout << "Enter roll number: ";
    cin >> p->rollNo;
    cout << "Enter full name: ";
    getline(cin >> ws, p->name);
    cout << "Enter marks: ";
    cin >> p->marks;

    cout << endl;
    cout << "--- Student Details ---" << endl;
    cout << "Roll No: " << p->rollNo << endl;
    cout << "Name: " << p->name << endl;
    cout << "Marks: " << p->marks << endl;

    delete p;    // release heap memory
    p = nullptr; // prevent dangling pointer

    cout << endl;
    cout << "Record deleted. Memory released." << endl;
    return 0;
}