#include <iostream>
#include <cmath>
using namespace std;

// Function to check if a number is prime
bool isPrime(int number) {
    if (number <= 1) return false; // 0 and 1 are not prime numbers
    for (int i = 2; i * i <= number; i++) { // Check divisors up to the square root
        if (number % i == 0) return false;
    }
    return true;
}

// Function to check if a number is a perfect square
bool isPerfectSquare(int number) {
    int root = sqrt(number);
    return (root * root == number);
}

// Function to check primes in a range
void checkPrimesInRange(int start, int end) {
    for (int i = start; i <= end; i++) {
        if (isPrime(i)) {
            cout << i << " is a prime number." << endl;
        }
    }
}

// Function to validate if the input is positive
bool isValidInput(int number) {
    return number > 0; // Only accept positive integers
}

int main() {
    int number;

    cout << "Prime Number Checker" << endl;
    cout << "--------------------" << endl;

    // Get user input for checking a single number
    cout << "Enter a number to check if it's prime: ";
    cin >> number;

    // Input validation
    if (!isValidInput(number)) {
        cout << "Please enter a positive integer." << endl;
        return 1; // Exit the program if input is invalid
    }

    // Check if the number is prime
    if (isPrime(number)) {
        cout << number << " is a prime number." << endl;
    } else {
        cout << number << " is not a prime number." << endl;
    }

    // Check if the number is a perfect square
    if (isPerfectSquare(number)) {
        cout << number << " is a perfect square." << endl;
    } else {
        cout << number << " is not a perfect square." << endl;
    }

    // Check primes in a range
    int start, end;
    cout << "Enter the range to check for primes:" << endl;
    cout << "Start: ";
    cin >> start;
    cout << "End: ";
    cin >> end;

    checkPrimesInRange(start, end);

    return 0;
}
