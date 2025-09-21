//Create a program that takes a person's age as input and classifies them into different age groups (e.g., child, teenager, adult, senior). 
#include <iostream>
using namespace std;

int main() {
    int age,n,i;
    cout << "Enter the no. of person= ";
    cin >> n;  
for(i=1;i<=n;i++){
	cout<<"enter the age of "<<i<<"person =";
	cin>>age;
	if(age<0){
		cout<<"you entered wrong information"<<endl;
	}
	else if(age>=0 && age<=5){
		cout<<"you are child"<<endl;
	}
	else if(age>=6 && age<=18){
		cout<<"you are teenager"<<endl;
	}
	else if(age>=19 && age<=30){
		cout<<"you are adult"<<endl;
	}
	else{
		cout<<"you are senior"<<endl;
	}
	
	}

    return 0;
}
