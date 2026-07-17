/*
============================================================================
QUESTION: Print the table of n  .
LOGIC: Using a "for loop".
----------------------------------------------------------------------------
*/
#include<iostream>
using namespace std;
int main(){
    int n;//Variable 'n' declared as int
    cout<<"Enter the number: ";
    cin>>n;
    cout<<"The table of "<<n<<" is: ";
    for(int i=1;i<=10;i++){/* int i=1 defines initial point of
    loop, i<=10 defines the condition up to which the loop runs and i++
    (i=i+1) it updates after each loop completion.*/
        cout<<n*i<<" ";
        //Printing the table by computing n multiplied by i.
    }
    return 0;
}