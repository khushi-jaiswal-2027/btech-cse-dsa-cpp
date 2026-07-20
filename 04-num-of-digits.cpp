/*
============================================================================
QUESTION: Count digits of the number.
LOGIC: Using of "while loop with an if statement".
----------------------------------------------------------------------------
*/
#include<iostream>
using namespace std;
int main(){
    int n;//variable 'n' declared as integer.
    cout<<"Enter the number : ";
    cin>>n;
    int count=0;/*  Variable 'count' declared as int and 
     initialized from 0.*/
    cout<<"The number of digits in "<<n<<" is: ";
    if(n<0) n=-n;/* If user taken negative number then it 
    convert into positive number by multiply by (-).*/
    while(n/=10){/* n/=10 means n=n/10 via which it decrease one 
        by one until  the number becomes zero. */ 
    count++;//  Whenever condition satisfy count  increases by 1.
    }
    cout<<count + 1;//After completing loop result will get with add 1.
    return 0;
}