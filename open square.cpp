//* * * * * *
//*         *
//*         *
//* * * * * * draw this pattern.


#include<iostream>
using namespace std;
int main()
{
	int i,j;
	int n=6;
	for(i=0;i<4;i++){
		for(j=0;j<n;j++){
			if(i==0 || i==3 || j==0 ||j==n-1)
			cout<<"*"<<"  ";
			else
			cout<<"   ";
		}
		cout<<endl<<endl;
	}
	return 0;
}
