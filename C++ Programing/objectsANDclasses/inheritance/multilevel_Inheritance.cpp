#include <iostream>
using namespace std;

// Base class
class Person {
protected:
    string name;

public:
    void getName() {
        cout << "Enter name: ";
        cin >> name;
    }

    void displayName() {
        cout << "Name: " << name << endl;
    }
};

// Intermediate derived class
class Student : public Person {
protected:
    int studentID;

public:
    void getStudentID() {
        cout << "Enter student ID: ";
        cin >> studentID;
    }

    void displayStudentID() {
        cout << "Student ID: " << studentID << endl;
    }
};

// Final derived class
class GraduateStudent : public Student {
private:
    string researchTopic;

public:
    void getResearchTopic() {
        cout << "Enter research topic: ";
        cin >> researchTopic;
    }

    void displayResearchTopic() {
        displayName();
        displayStudentID();
        cout << "Research Topic: " << researchTopic << endl;
    }
};

int main() {
    GraduateStudent gs;
    gs.getName();
    gs.getStudentID();
    gs.getResearchTopic();
    gs.displayResearchTopic();
    return 0;
}
