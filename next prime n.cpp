//Write a program to find next Prime number of a given number. 
#include <iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int n) {
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

// Function to find next prime number
int nextPrime(int num) {
    int next = num + 1;
    while (!isPrime(next)) {
        next++;
    }
    return next;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    int next = nextPrime(number);

    cout << "The next prime number after " << number << " is " << next << endl;

    return 0;
}

