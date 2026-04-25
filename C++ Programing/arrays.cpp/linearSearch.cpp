#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i;  // Return the index of the found element
        }
    }
    return -1;  // Return -1 if the element is not found
}

int main() {
    int n, target;

    // Input number of elements
    cout << "Enter number of elements in the array: ";
    cin >> n;

    int arr[n];  // Array of size n

    // Input elements of the array
    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Input the element to search for
    cout << "Enter the element to search: ";
    cin >> target;

    // Perform linear search
    int result = linearSearch(arr, n, target);

    // Output the result
    if (result != -1) {
        cout << "Element found at index " << result << endl;
    } else {
        cout << "Element not found in the array!" << endl;
    }

    return 0;
}
