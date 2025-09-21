//13.	Develop a program that takes a student's score (0-100) as input and prints the corresponding grade (e.g., A, B, C, D, F) based on a grading scale. 

#include <iostream>
using namespace std;

int main() {
    int score,n,i;
    cout << "Enter the no. of students= ";
    cin >> n;  
for(i=1;i<=n;i++){
	cout<<"enter the score of "<<i<<"student =";
	cin>>score;
	if(score<0 || score>100){
		cout<<"you entered wrong information"<<endl;
	}
	else if(score>=90 && score<=100){
		cout<<"the "<<i<<"student grade=A"<<endl;
	}
	else if(score>=70 && score<=89){
		cout<<"the "<<i<<"student grade=B"<<endl;
	}
	else if(score>=50 && score<=69){
		cout<<"the "<<i<<"student grade=C"<<endl;
	}
	else{
		cout<<"the "<<i<<"student grade=D"<<endl;
	}
	
	}

    return 0;
}
