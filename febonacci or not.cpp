//Write a program to check whether a given number is there in the Fibonacci series or not. 
#include<iostream>
using namespace std;
int main()
{
	int n,a,b,c;
	cout<<"enter the number=";
	cin>>n;
	if (n==0 || n==1){
		cout<<n<<" is a fibonacci number";
	}
	else{
		a=0;
		b=1;
		c=a+b;
		while(c<n){
			a=b;
			b=c;
			c=a+b;
		}
			if(c==n){
				cout<<n<<" is a fibonacci number";
			}
			else{
				cout<<n<<" is not a fibonacci number";
			}
		}
		
	return 0;
}
