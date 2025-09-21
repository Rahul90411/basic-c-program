//	Write a program to calculate simple interest. 
#include<iostream>
using namespace std;
int main()
{
	float p,r,t;
	float si;
	cout<<"enter principle amt=";
	cin>>p;
		cout<<"enter time =";
	cin>>t;
		cout<<"enter rate=";
	cin>>r;
	si=p*t*r/100;
	cout<<"simple intrest="<<si;
	return 0;
	
}
