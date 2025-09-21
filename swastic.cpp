//*     * * * *
//*     *
//*     *
//* * * * * * *
//      *     *
//      *     *
//* * * *     *   draw this pattern.

#include<iostream>
using namespace std;
int main()
{
	int i,j;
	int n=7;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(i==3 ||j==3 ||i==0 && j>n/2 || j==0 && i<n/2 || i==n-1 && j<n/2 ||j==n-1 && i>n/2)
			cout<<"*"<<" ";
			else
			cout<<"  ";
		}
		cout<<endl;

}
	return 0;
}
