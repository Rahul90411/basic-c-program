//Write a program that takes three numbers as input and finds the middle (second largest) number. 
#include <iostream>
using namespace std;
int main()
{
int a,b,c;
cout<<"enter three numbers=";
cin>>a>>b>>c;
	if( (a>c && a<b) || (a<c && a>b) ){
		cout<<"middle number="<<a;
	}
	else if((b>c && b<a) || (b<c && b>a)){
	cout<<"middle number="<<b;	
	}
	else{
		cout<<"middle number="<<c;
	}

	return 0;
}

