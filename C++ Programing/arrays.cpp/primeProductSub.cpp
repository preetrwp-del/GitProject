#include <iostream>
using namespace std;

// Check if a number is prime
bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0) return false;
    return true;
}

// Get the nth prime number
int getNthPrime(int pos) {
    int count = 0, num = 1;
    while (count < pos) {
        num++;
        if (isPrime(num)) count++;
    }
    return num;
}

int main() {
    int a, b;

    cout << "Enter two positions in the prime sequence: ";
    cin >> a >> b;

    int prime1 = getNthPrime(a);
    int prime2 = getNthPrime(b);

    int result = (prime1 * prime2) - 1;

    cout << "The " << a << "th prime is: " << prime1 << endl;
    cout << "The " << b << "th prime is: " << prime2 << endl;
    cout << "Result (product - 1): " << result << endl;

    return 0;
}
