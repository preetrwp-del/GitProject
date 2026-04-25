#include <iostream>
using namespace std;

void deleteElement(int arr[], int &n, int position) {
    // Check if the position is valid
    if (position < 1 || position > n) {
        cout << "Invalid position!" << endl;
        return;
    }

    // Shift all elements after the position to the left
    for (int i = position - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    // Decrease the size of the array
    n--;
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n, position;

    // Input number of elements
    cout << "Enter number of elements in the array: ";
    cin >> n;

    int arr[n]; // Array of size n

    // Input elements of the array
    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Input the position of the element to delete
    cout << "Enter the position to delete the element (1 to " << n << "): ";
    cin >> position;

    // Delete the element
    deleteElement(arr, n, position);

    // Output the updated array
    cout << "Updated array: ";
    printArray(arr, n);

    return 0;
}
