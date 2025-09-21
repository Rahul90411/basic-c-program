//        *
//      * *
//    * * *
//  * * * *
//* * * * * draw this program.




#include<iostream>
using namespace std;
int main()
{
	int i,j;
	int n=5;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(i==n-1 ||j==n-1 ||i+j==n-1 || j==3 && i>0 || j==2 && i>1) 
			cout<<"*"<<" ";
			else
			cout<<"  ";
		}
		cout<<endl;

}
	return 0;
}

