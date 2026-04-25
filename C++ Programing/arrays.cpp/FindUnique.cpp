#include <iostream>
using namespace std;

// Function to print unique elements
void printUnique(int arr[], int size) {
    bool isUnique;

    cout << "Unique elements in the array are: ";

    for (int i = 0; i < size; i++) {
        isUnique = true;
        for (int j = 0; j < size; j++) {
            if (i != j && arr[i] == arr[j]) {
                isUnique = false;
                break;
            }
        }
        if (isUnique) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}

// Main function
int main() {
    int arr[] = {4, 5, 6, 4, 7, 5, 8};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Call function
    printUnique(arr, size);

    return 0;
}
 