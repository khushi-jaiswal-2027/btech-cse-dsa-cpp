/*
============================================================================
QUESTION: Print the number is even or odd.
LOGIC: Using of "if-else conditional statement".
----------------------------------------------------------------------------
*/
#include<iostream>
/*Using of include- to bring specific file before running
the program while <iostream> handle the text flow into program(input) and
out the program(output).*/
using namespace std;
/*It is use as scope handler in which it look inside this standard box 
automatically whenever user type a command.*/
int main(){
/*int main() - It is a entry point of code begin,it return 
integer output and has zero control over internal calculation*/
    int n;//variable 'n' declare as integer
    cout<<"Enter the number : ";
    cin>>n;
    if (n%2==0) cout<<n<<" is even number.";/*If n divisible by 2 and get 0 remainder
    then it print n is even number.*/
    else cout<<n<<" is odd number.";/*while remainder not get 0 then it print
    n is odd number*/
    return 0;//Signal for successful program termination.
}