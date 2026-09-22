// Name: Muhammad Kaleem Sajjad
// Registration No: 544147
// Section: BSCS 15 E

// Task 4: Using functions with pointers
#include<iostream>
#include<string>
using namespace std;

struct Student{
    int rollNo;
    string name;
    float marks;
};

// const pointer prevents modification of the record inside this function
void displayStudent(const Student* s){
    cout << "Roll No: " << s->rollNo << endl;
    cout << "Name: " << s->name << endl;
    cout << "Marks: " << s->marks << endl;
}

// non-const pointer allows updating the marks field
void updateMarks(Student* s, float newMarks){
    s->marks = newMarks;
}

int main(){
    Student* p = new Student{};

    cout << "Enter roll number: ";
    cin >> p->rollNo;
    cout << "Enter full name: ";
    getline(cin >> ws, p->name);
    cout << "Enter marks: ";
    cin >> p->marks;

    cout << endl;
    cout << "--- Student Details ---" << endl;
    displayStudent(p);

    float newMarks;
    cout << endl;
    cout << "Enter updated marks: ";
    cin >> newMarks;
    updateMarks(p, newMarks);

    cout << endl;
    cout << "--- Updated Student Details ---" << endl;
    displayStudent(p);

    delete p;    // free heap memory before program ends
    p = nullptr;
    return 0;
}