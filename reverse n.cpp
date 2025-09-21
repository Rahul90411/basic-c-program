//Write a program to reverse a given number 
#include<iostream>
using namespace std;
int main()
{
	int n,rev=0;
	cout<<"enter the  number=";
	cin>>n;
	while(n>0){
		rev=(rev*10) + (n%10);
		n=n/10;
	}
	cout<<"reverse="<<rev<<endl;
	return 0;
}

