//Write a program to print all Prime numbers between two given numbers. 
#include<iostream>
using namespace std;
int main()
{
	int n,i,start,end;
	cout<<"enter the starting number=";
	cin>>start;
	cout<<"enter the last number=";
	cin>>end;
	cout<<"prime number between " <<start<<" and "<<end<< " are as follows \n";
	for(n=start;n<=end;n++)
	{
		
	for(i=2;i<=n/2;i++){
		if(n%i==0)
		break;
	}
	if(i>n/2)
	{
		cout<<n<<" ";
	}
}
return 0;
}
