#include <iostream>
using namespace std;

// Base class
class Shape {
public:
    virtual void draw() {  // Virtual function
        cout << "Drawing a shape..." << endl;
    }
};

// Derived class 1
class Circle : public Shape {
public:
    void draw() override {  // Overriding the virtual function
        cout << "Drawing a circle!" << endl;
    }
};

// Derived class 2
class Rectangle : public Shape {
public:
    void draw() override {
        cout << "Drawing a rectangle!" << endl;
    }
};

// Main function for testing
int main() {
    Shape* c= new Circle();
    c->draw();
    Shape* r= new Rectangle();
    r->draw();
    return 0;
}
