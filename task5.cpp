// Name: Muhammad Kaleem Sajjad
// Registration No: 544147
// Section: BSCS 15 E

// Task 5: Checking whether a record exists
#include<iostream>
#include<string>
using namespace std;

struct Student{
    int rollNo;
    string name;
    float marks;
};

// prints record if pointer is valid, otherwise prints a message
void displayIfExists(const Student* s){
    if (s == nullptr) {
        cout << "No record available" << endl;
    } else {
        cout << "Roll No: " << s->rollNo << endl;
        cout << "Name: " << s->name << endl;
        cout << "Marks: " << s->marks << endl;
    }
}

int main(){
    Student* p = nullptr; // start with no record

    cout << "Checking before allocation:" << endl;
    displayIfExists(p);

    p = new Student{};
    cout << "Enter roll number: ";
    cin >> p->rollNo;
    cout << "Enter full name: ";
    getline(cin >> ws, p->name);
    cout << "Enter marks: ";
    cin >> p->marks;

    cout << "Checking after allocating and entering record:" << endl;
    displayIfExists(p);

    delete p;
    p = nullptr; // reset to nullptr so future checks are safe

    cout << "Checking after deleting the record:" << endl;
    displayIfExists(p);
    return 0;
}