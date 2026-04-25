#include <iostream>
using namespace std;

class Rectangle {
private:
    float length;
    float width;

public:
    // Constructor to initialize dimensions
    Rectangle(float l, float w) {
        length = l;
        width = w;
    }

    // Function to calculate area
    float area() {
        return length * width;
    }
};

int main() {
    float l, w;

    // User input
    cout << "Enter length: ";
    cin >> l;
    cout << "Enter width: ";
    cin >> w;

    // Dynamically allocating object of Rectangle
    Rectangle* rect = new Rectangle(l, w);

    // Output area
    cout << "Area of the rectangle: " << (*rect).area()<<endl;

    // Free allocated memory
    delete rect;

    return 0;
}
