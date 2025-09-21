//Write a program to count digits in a given number 

#include <iostream>
#include <cmath> 

using namespace std;

int main() {
    int num;
    int count = 0;
    cout << "Enter an integer: ";
    cin >> num;
    if (num == 0) {
        count = 1;
    } else {
        num = abs(num); // Make sure the number is positive
        while (num > 0) {
            num=num/10;  
            count++;     
        }
    }

    cout << "Number of digits: " << count << endl;

    return 0;
}

