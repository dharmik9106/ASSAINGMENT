#include<iostream>

using namespace std;

int main(){
    
    int d;

    cout << "Enter Digit: ";
    cin >> d;


     int last_digit=d%10;
     int first_digit = d;


     while(first_digit >= 10){

        first_digit = first_digit / 10;

     }

     int sum = first_digit + last_digit;

       cout <<"First and Last Digit sum : "<< sum << endl;   
   
    return 0;
}