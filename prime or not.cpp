//Write a program to check whether a given number is a Prime number or not 
#include <iostream>

using namespace std;

int main() {
    int num;
    int count = 0,i;
    cout << "Enter an integer: ";
    cin >> num;
    for(i=1;i<=num;i++){
    	if(num%i==0)
    	{
    		count++;
		}
	}
	if(count==2){
	
	cout<<num<<" is prime number"<<endl;
}
else
    cout<<num<<" is not prime number"<<endl;

    return 0;
}

