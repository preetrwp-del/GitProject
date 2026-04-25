#include <iostream>
using namespace std;

int main() {
    int arr[3] = {10, 20, 30};
    int* ptr = arr;

    cout << "Original values:\n";
    for (int i = 0; i < 3; i++) {
        cout << arr[i] << " ";
    }
    cout<<endl;

    cout << "Accessing array elements using pointer:\n";
    for (int i = 0; i < 3;i++) {
        cout << "Element " << i << ": " << *(ptr + i) << endl;
    }

    // Modify array using pointer
    for (int i = 0; i < 3; i++) {
        *(ptr + i) += 5;
    }

    cout << "\nModified values:\n";
    for (int i = 0; i < 3; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
