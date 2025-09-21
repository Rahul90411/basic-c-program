//Write a program to calculate LCM of two numbers 
#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"enter the two numbers=";
	cin>>a>>b;
	for(int i=1;i>0;i++){
		if(i%a==0 && i%b==0)
		{
			cout<<"LCM ="<<i;
			break;
			
		}
	}
	return 0;
}
