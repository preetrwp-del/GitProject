#include <iostream>
using namespace std;

bool isPalindrome(int num) {
    int originalNum = num;
    int reversedNum = 0;
    
    // Reverse the number
    while (num != 0) {
        int digit = num % 10; // Get the last digit
        reversedNum = reversedNum * 10 + digit; // Build the reversed number
        num /= 10; // Remove the last digit from num
    }
    
    // Compare the original number with the reversed number
    return originalNum == reversedNum;
}

int main() {
    int number;
    
    cout << "Enter a number: ";
    cin >> number;
    
    if (isPalindrome(number)) {
        cout << number << " is a palindrome." << endl;
    } else {
        cout << number << " is not a palindrome." << endl;
    }
    
    return 0;
}
