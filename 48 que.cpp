//1
//1 2
//1 2 3 
//1 2 3 4 
//1 2 3 4 5  draw this pattern.



#include<iostream>
using namespace std;
int main()
{
	int i,j;
	int n=5;
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			if(j==1 || j==i || i==n || j==2 && i>2 || j==3 && i>3)
			cout<<j<<" ";
			else
			cout<<"  ";
		}
		cout<<endl;

}
	return 0;
}

