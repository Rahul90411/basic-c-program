//	Write a program to check whether a given number is an Armstrong number or not. 
#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter Any Number: ";
    cin >> num;

    int n = num;
    int sum = 0;

    while(n != 0)
    {
        int rem = n % 10;
        sum = sum + (rem * rem * rem);
        n = n / 10;
    }

    if(sum == num)
    {
        cout << num << " is an Armstrong Number."<<endl;
    }
    else{
    	cout << num << " is not an Armstrong Number."<<endl;
	}

    return 0;
}

