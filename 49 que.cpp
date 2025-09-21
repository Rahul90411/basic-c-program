//A
//A B
//A B C
//A B C D
//A B C D E draw this pattern.



#include<iostream>
using namespace std;
int main()
{
	int i,j;
	int n=5;
	for(i=1;i<=n;i++){
		char ch='A';
		for(j=1;j<=i;j++){
		
			cout<<ch<<" ";
			ch++;

		}
		cout<<endl;

}
	return 0;
}
