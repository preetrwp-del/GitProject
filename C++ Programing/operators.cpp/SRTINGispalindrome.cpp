#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string str) {
    int start = 0;
    int end = str.length() - 1;
    
    // Compare characters from both ends
    while (start < end) {
        if (str[start] != str[end]) {
            return false;  // If characters don't match, it's not a palindrome
        }
        start++;
        end--;
    }
    
    return true;  // If all characters match, it's a palindrome
}

int main() {
    string str;
    
    cout << "Enter a string: ";
    getline(cin, str);  // Taking the entire line as input, to include spaces
    
    if (isPalindrome(str)) {
        cout << "\"" << str << "\" is a palindrome." << endl;
    } else {
        cout << "\"" << str << "\" is not a palindrome." << endl;
    }
    
    return 0;
}
