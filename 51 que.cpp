//* * * * *
//* * * * 
//* * *
//* *
//*  draw this pattern.


#include<iostream>
using namespace std;
int main()
{
	int i,j;
	int n=5;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(i==0 ||j==0 ||i+j==n-1 || j==1 && i<n-1 || j==2 && i<3) 
			cout<<"*"<<" ";
			else
			cout<<"  ";
		}
		cout<<endl;

}
	return 0;
}

