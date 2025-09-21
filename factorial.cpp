//Write a program to calculate factorial of a number 
#include <iostream>
using namespace std;

int main() {
    int N, fact = 1;
    cout << "Enter a number N: ";
    cin >> N;
    for(int i = 1; i <= N; i++) {
        fact=fact*i;
    }
    cout << "the factorial of " <<N<<" = "<< fact << endl;

    return 0;
}
