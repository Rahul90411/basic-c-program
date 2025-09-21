//	Write a program to input three characters from the user and display characters with their corresponding ASCII codes. 
#include<iostream>
using namespace std;
int main()
{
	char a,b,c;
	int x,y,z;
	cout<<"enter the three characters=";
	cin>>a>>b>>c;
	x=(int)a;
	y=(int)b;
	z=(int)c;
	cout<<"the ASCII code of "<<a<<"="<<x<<endl;
	cout<<"the ASCII code of "<<b<<"="<<y<<endl;
	cout<<"the ASCII code of "<<c<<"="<<z<<endl;
	return 0;
}

