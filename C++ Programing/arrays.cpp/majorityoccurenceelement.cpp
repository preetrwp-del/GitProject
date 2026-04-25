#include <iostream>
using namespace std;

int findMajorityElement(int arr[], int n) {
    int count = 0, candidate = -1;

    // Step 1: Find candidate for majority element
    for (int i = 0; i < n; i++) {
        if (count == 0) {
            candidate = arr[i];
            count = 1;
        } else {
            count += (arr[i] == candidate) ? 1 : -1;
        }
    }

    // Step 2: Verify candidate
    count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == candidate)
            count++;
    }

    if (count > n / 2)
        return candidate;
    else
        return -1; // No majority element
}

int main() {
    int arr[] = {2, 4,5,6,7,3 };
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = findMajorityElement(arr, n);

    if (result != -1)
        cout << "Majority element is: " << result << endl;
    else
        cout << "No majority element found." << endl;

    return 0;
}
  