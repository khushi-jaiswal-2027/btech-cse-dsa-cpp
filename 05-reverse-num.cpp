/*
============================================================================
QUESTION: Reversing  the number.
LOGIC: Using of "while loop ".
----------------------------------------------------------------------------
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
        while(n>0){//When n is greater than 0.
            int p=n%10;/*  Variable 'p'is declared as integer in which stores
            n % 10 to get last digit of number.*/
            cout<<p;//Printing  p whenever computing n%10.
            n/=10;// n/10 removes the last digit.
        }
        return 0;
}