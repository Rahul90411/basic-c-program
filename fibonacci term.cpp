//Write a program to find the Nth term of the Fibonacci series. 
 

#include<iostream>
using namespace std;
int main()
{
	int n,a=0,b=1,c,i;
	cout<<"enter the nth term=";
	cin>>n;
	if(n==1){
		cout<<"the "<<n<<"st term is="<<a<<" "<<endl;
	}
	else if(n==2){
		cout<<"the "<<n<<"nd term is="<<b<<" "<<endl;
	}
	else{
	for(i=3;i<=n;i++)
	{
	c=a+b;
	a=b;
	b=c;
}
	cout<<"the "<<n<<"th term is="<<c<<" "<<endl;
}
	return 0;
}

