//	Write a program to ask user about the cost price and selling price banana per dozen. 
// Calculate the profit or loss earned upon selling 25 bananas. 
#include<iostream>
using namespace std;
int main()
{
	float cpdozon,spdozon;
	float cpbanana,spbanana;
	float nobanana;	
	float totalcost,totalsale;
	cout<<"enter the cost price of one dozon=";
	cin>>cpdozon;
		cout<<"enter the sale price of one dozon=";
	cin>>spdozon;
	cpbanana=cpdozon/12;
		cout<<"the cost price of 1 banana ="<<cpbanana<<endl;
		spbanana=spdozon/12;
		cout<<"the sale price of 1 banana ="<<spbanana<<endl;
		cout<<"enter the amount of banana=";
		cin>>nobanana;
		totalcost=nobanana*cpbanana;
	cout<<"total cost amt of bananas="<<totalcost<<endl;
	totalsale=nobanana*spbanana;
	cout<<"total sale amt of bananas="<<totalsale<<endl;
	if(totalcost<totalsale)
	{
		cout<<"profit amt. ="<<totalsale-totalcost<<endl;
	}
	else if(totalcost>totalsale){
		cout<<"loss amt. ="<<totalcost-totalsale<<endl;
	}
	else{
		cout<<"no profit or loss"<<endl;
	}
	return 0;
	
}
