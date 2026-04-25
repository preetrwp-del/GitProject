#include <iostream>
using namespace std;

// Base class
class Person {
protected:
    string name;
    int age;

public:
    void getPersonDetails() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }

    void displayPersonDetails() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

// Derived class
class Student : public Person {
private:
    int rollNo;

public:
    void getStudentDetails() {
        getPersonDetails(); // calling base class function
        cout << "Enter roll number: ";
        cin >> rollNo;
    }

    void displayStudentDetails() {
        displayPersonDetails();
        cout << "Roll Number: " << rollNo << endl;
    }
};

int main() {
    Student s;
    s.getStudentDetails();
    s.displayStudentDetails();
    return 0;
}
 