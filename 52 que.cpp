//* * * * * 
//  * * * *
//    * * *
//      * *
//        * draw this pattern.




#include<iostream>
using namespace std;
int main()
{
	int i,j;
	int n=5;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(i==0 ||j==4 || i==j || j==2 && i<2 || j==3 && i<3) 
			cout<<"*"<<" ";
			else
			cout<<"  ";
		}
		cout<<endl;

}
	return 0;
}

