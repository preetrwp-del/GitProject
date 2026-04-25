#include <iostream>
using namespace std;

int main() {
    int num = 42;
    int* ptr = &num; // pointer stores the address of num

    cout << "Value of num: " << num << endl;
    cout << "Address of num (&num): " << &num << endl;
    cout << "Value of pointer ptr: " << ptr << endl;
    cout << "Value pointed to by ptr (*ptr): " << *ptr << endl;

    *ptr=20;  // changing value using pointer

    cout << "After changing "<<num<<endl;

    return 0;
}


