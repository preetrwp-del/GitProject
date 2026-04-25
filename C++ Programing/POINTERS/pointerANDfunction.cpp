#include <iostream>
using namespace std;

void swap(int* x, int* y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}
void increment(int* num) {
    (*num)++;
}

int main() {
    int a = 10, b = 20;
    cout << "BEFORE swap: a=" << a <<",b="<< b <<endl;
    swap(&a, &b);
    cout << "After swap: a = " << a << ", b = " << b << endl;
    int c= 5;
    cout << "BEFORE INCREMENT"<< "c = " << c << endl;
    increment(&c); // passing address
    cout << "After increment: " << c <<endl;
    return 0;
}
