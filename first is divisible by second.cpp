//	Write a program that reads two integers from the user and determines if the first integer is divisible by the second integer

#include <iostream>
using namespace std;

int main() {
    int num1,num2;
    cout << "Enter the first integer= ";
    cin >> num1;  
	cout<<"enter the second integer=";
	cin>>num2;
	if(num2==0){
		cout<<"division by zero is not possible"<<endl;
	}
	else if(num1 % num2 ==0){
		cout<<num1<<" is divisible by "<<num2<<endl;
	}
	else{
		cout<<num1<<" is not divisible by "<<num2<<endl;
	}

    return 0;
}
