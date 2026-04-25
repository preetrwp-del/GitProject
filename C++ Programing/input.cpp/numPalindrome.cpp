#include<iostream>
using namespace std;
bool isPalindrome(int n){
    int original = n;
    int reverse = 0;
    while(n>0){
        int lastDigit = n%10;
        reverse = reverse*10 + lastDigit;
        n/=10;
    }
    return(original == reverse);
}
int main()
{
    int number;
    cout << "Enter th number: ";
    cin>>number;
    if(isPalindrome(number)){
        cout<<number<<" is Palindrome."<<endl;
    }
    else{
        cout<<number<<" is not Palindrome."<<endl;
    }
    return 0;
}