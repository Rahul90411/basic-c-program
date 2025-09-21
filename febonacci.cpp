//Write a program to print first N terms of Fibonacci series. 
#include<iostream>
using namespace std;
int main()
{
	int n,a=0,b=1,c,i;
	cout<<"enter the nth term=";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cout<<a<<" ";
	c=a+b;
	a=b;
	b=c;
	}
	return 0;
}
