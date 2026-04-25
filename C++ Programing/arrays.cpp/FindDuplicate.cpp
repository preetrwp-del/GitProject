#include <iostream>
using namespace std;

int main() {
    int arr[] = {2, 4, 6, 2, 7, 4, 9};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Duplicate elements: ";
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                cout << arr[i] << " ";
                break;
            }
        }
    }
    cout << endl;

    return 0;
}
