#include <iostream>
using namespace std;

bool isPrime(int number) {
    if (number <= 1) return false; // 0 and 1 are not prime numbers
    for (int i = 2; i * i <= number; i++) { // Check divisors up to the square root
        if (number % i == 0) return false;
    }
    return true;
}

int main() {
    int number;

    cout << "Prime Number Checker" << endl;
    cout << "--------------------" << endl;

    cout << "Enter a number to check if it's prime: ";
    cin >> number;

    if (isPrime(number)) {
        cout << number << " is a prime number." << endl;
    } else {
        cout << number << " is not a prime number." << endl;
    }

    return 0;
}
