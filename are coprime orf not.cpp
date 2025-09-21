//Write a program to check whether two given numbers are co-prime numbers or not. 
#include <iostream>
using namespace std;
int findHCF(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    int hcf = findHCF(num1, num2);

    if (hcf == 1) {
        cout << num1 << " and " << num2 << " are Co-Prime numbers." << endl;
    } else {
        cout << num1 << " and " << num2 << " are NOT Co-Prime numbers." << endl;
    }

    return 0;
}

