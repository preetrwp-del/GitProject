#include <iostream>
using namespace std;

void insertElement(int arr[], int &n, int element, int position) {
    // Check if the position is valid
    if (position < 1 || position > n + 1) {
        cout << "Invalid position!" << endl;
        return;
    }

    // Shift all elements after the position to the right
    for (int i = n; i >= position; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the new element at the specified position
    arr[position - 1] = element;

    // Increment the size of the array
    n++;
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n, element, position;

    // Input number of elements
    cout << "Enter number of elements in the array: ";
    cin >> n;

    int arr[n + 1]; // Array size is n+1 to accommodate new element

    // Input elements of the array
    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Input the element to insert and the position
    cout << "Enter the element to insert: ";
    cin >> element;
    cout << "Enter the position to insert the element (1 to " << n + 1 << "): ";
    cin >> position;

    // Insert the element
    insertElement(arr, n, element, position);

    // Output the updated array
    cout << "Updated array: ";
    printArray(arr, n);

    return 0;
}
