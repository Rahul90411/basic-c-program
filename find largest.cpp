//Develop a program that takes four numbers as input and prints the largest among them. 
#include <iostream>
using namespace std;
int main()
{
int a,b,c,d;
cout<<"enter four numbers=";
cin>>a>>b>>c>>d;
	if(a>c && a>b && a>d){
		cout<<a<<" is the largest number.";	
	}
	else if(b>c && b>a && b>d){
	cout<<b<<" is the largest number.";	
	}
	else if(c>a && c>b && c>d){
		cout<<c<<" is the largest number.";	
	}
	else{
		cout<<d<<" is the largest number.";	
	}

	return 0;
}


