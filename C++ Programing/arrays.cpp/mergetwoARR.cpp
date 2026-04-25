#include <iostream>
using namespace std;

void mergeArrays(int arr1[], int n1, int arr2[], int n2, int mergedArr[]) {
    int i = 0, j = 0, k = 0;

    // Merge the arrays while both arrays have elements
    while (i < n1 && j < n2) {
        if (arr1[i] < arr2[j]) {
            mergedArr[k] = arr1[i];
            i++;
        } else {
            mergedArr[k] = arr2[j];
            j++;
        }
        k++;
    }

    // If elements remain in arr1
    while (i < n1) {
        mergedArr[k] = arr1[i];
        i++;
        k++;
    }

    // If elements remain in arr2
    while (j < n2) {
        mergedArr[k] = arr2[j];
        j++;
        k++;
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n1, n2;

    // Input size of the first array
    cout << "Enter number of elements in the first array: ";
    cin >> n1;
    int arr1[n1];

    // Input elements of the first array
    cout << "Enter " << n1 << " sorted elements of the first array:" << endl;
    for (int i = 0; i < n1; i++) {
        cin >> arr1[i];
    }

    // Input size of the second array
    cout << "Enter number of elements in the second array: ";
    cin >> n2;
    int arr2[n2];

    // Input elements of the second array
    cout << "Enter " << n2 << " sorted elements of the second array:" << endl;
    for (int i = 0; i < n2; i++) {
        cin >> arr2[i];
    }

    // Create a merged array of size n1 + n2
    int mergedArr[n1 + n2];

    // Merge the two arrays
    mergeArrays(arr1, n1, arr2, n2, mergedArr);

    // Output the merged array
    cout << "Merged sorted array: ";
    printArray(mergedArr, n1 + n2);

    return 0;
}
