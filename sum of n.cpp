//Write a program to calculate sum of first N natural numbers 
#include <iostream>
using namespace std;

int main() {
    int N, sum = 0;
    cout << "Enter a number N: ";
    cin >> N;
    for(int i = 1; i <= N; i++) {
        sum=sum + i;
    }
    cout << "Sum of natural numbers = " << sum << endl;

    return 0;
}
