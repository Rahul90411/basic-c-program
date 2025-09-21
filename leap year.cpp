//Write a program that takes a start year and an end year from the user and prints all the leap years in that range. 
#include <iostream>
using namespace std;
int main()
{
int syear,eyear;
cout<<"enter the start year=";
cin>>syear;
cout<<"enter the end year=";
cin>>eyear;
	cout<<"your leap year from "<<syear<<" to "<<eyear<<" is "<<endl;
for(int i=syear;i<=eyear;i++)
{
	if(i%4==0){
		cout<<i<<endl;
	}
}
	
	
	return 0;
}
