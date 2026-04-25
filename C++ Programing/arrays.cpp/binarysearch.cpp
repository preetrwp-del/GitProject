#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int target) {
    int begg = 0;
    int endd = n - 1;

    while (begg <= endd) {
        int mid = begg + (endd - begg) / 2;

        // Check if the target is at mid
        if (arr[mid] == target) {
            return mid;  // Return the index of the found element
        }
        // If the target is smaller than mid, it must be on the left side
        else if (arr[mid] > target) {
            endd = mid - 1;
        }
        // If the target is greater than mid, it must be on the right side
        else {
            begg = mid + 1;
        }
    }

    // Return -1 if the element is not found
    return -1;
}

int main() {
    int n, target;

    // Input number of elements (array must be sorted)
    cout << "Enter number of elements in the array: ";
    cin >> n;

    int arr[n];  // Array of size n

    // Input sorted elements of the array
    cout << "Enter " << n << " sorted elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Input the element to search for
    cout << "Enter the element to search: ";
    cin >> target;

    // Perform binary search
    int result = binarySearch(arr, n, target);

    // Output the result
    if (result != -1) {
        cout << "Element found at index " << result << endl;
    } else {
        cout << "Element not found in the array!" << endl;
    }

    return 0;
}
