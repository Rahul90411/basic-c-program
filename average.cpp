// 1.	Write a program to calculate average of three integers. Numbers are given by the user. 

#include<iostream>
using namespace std;
int main()
{
	float a,b,c;
	float avg;
	cout<<"enter three integers=";
	cin>>a>>b>>c;
	avg=(a+b+c)/3;
	cout<<"avg no.="<<avg;
	return 0;
	
}
