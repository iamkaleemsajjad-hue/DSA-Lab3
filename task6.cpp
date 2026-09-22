// Name: Muhammad Kaleem Sajjad
// Registration No: 544147
// Section: BSCS 15 E

// Task 6: Building a student record application
#include<iostream>
#include<string>
using namespace std;

struct Student{
    int rollNo;
    string name;
    float marks;
};

// reused from Task 5: safe display with nullptr check
void displayIfExists(const Student* s){
    if (s == nullptr){
        cout << "No record available" << endl;
    } else {
        cout << "Roll No: " << s->rollNo << endl;
        cout << "Name: " << s->name << endl;
        cout << "Marks: " << s->marks << endl;
    }
}

// reused from Task 4: update marks through pointer
void updateMarks(Student* s, float newMarks){
    s->marks = newMarks;
}

int main() {
    Student* p = nullptr; // single managed record pointer
    int choice;
    do {
        cout << endl;
        cout << "----- Student Record Menu -----" << endl;
        cout << "1. Create record" << endl;
        cout << "2. Display record" << endl;
        cout << "3. Update marks" << endl;
        cout << "4. Delete record" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                if (p != nullptr) {
                    cout << "A record already exists. Delete it first." << endl;
                } else {
                    p = new Student{};
                    cout << "Enter roll number: ";
                    cin >> p->rollNo;
                    cout << "Enter full name: ";
                    getline(cin >> ws, p->name);
                    cout << "Enter marks: ";
                    cin >> p->marks;
                    cout << "Record created." << endl;
                }
                break;
            case 2:
                displayIfExists(p);
                break;
            case 3:
                if (p == nullptr) {
                    cout << "No record available" << endl;
                } else {
                    float newMarks;
                    cout << "Enter updated marks: ";
                    cin >> newMarks;
                    updateMarks(p, newMarks);
                    cout << "Marks updated." << endl;
                }
                break;
            case 4:
                if (p == nullptr) {
                    cout << "No record available" << endl;
                } else {
                    delete p;
                    p = nullptr; // reset after deletion to avoid dangling pointer
                    cout << "Record deleted." << endl;
                }
                break;
            case 5:
                if (p != nullptr) {
                    delete p; // release any remaining allocation on exit
                    p = nullptr;
                }
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "Invalid choice. Try again." << endl;
        }
    } while (choice != 5);
    return 0;
}