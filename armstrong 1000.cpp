//Write a program to print all Armstrong numbers under 1000 
#include <iostream>
using namespace std;

int main()
{
    for(int num=1;num<=1000;num++)
{

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
}
    return 0;
}
