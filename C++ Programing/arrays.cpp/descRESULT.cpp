#include <iostream>
using namespace std;

int main() {
    int n;

    // Input the number of elements
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n]; // Declare the array

    // Input array elements
    cout << "Enter " << n << " elements:" << endl;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Sort the array in descending order (simple bubble sort)
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(arr[j] < arr[j + 1]) {
                // Swap elements
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Output the sorted array
    cout << "Array in descending order:" << endl;
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
