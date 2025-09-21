//WAP to take time as an input in below given format and convert the time format and display the result as given below. 
//User Input date format - "HH:MM" 

#include <iostream>
using namespace std;

int main() {
    int hh, mm;
    char ch;
    cout << "Enter time in HH:MM format: ";
    cin >> hh >> ch >> mm;  
    cout << "Hour - " << hh << ", Minute - " << mm << endl;

    return 0;
}
