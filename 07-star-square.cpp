/*
============================================================================
QUESTION: Print star square of a given  number.
LOGIC: Using two "for loops " where  loop-1 control rows and loop-2 control
columns.
----------------------------------------------------------------------------
*/
#include<iostream>
using namespace std;
int main(){ 
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    for(int i=1;i<=n;i++){
/*outer loop-1 it controls rows of square grid in which variable 
    'i' declared as integer and initial point from 1. */
       for(int j=1;j<=n;j++){
/*inner loop-2 it controls  columns inside each row in which variable
    'j' declared as integer and initial point from 1. */
        cout<<"* ";//Printing of star(*) with space. 
       }cout<<endl;//Cleanly moves cursor to the next line after completing a row.
    }
    return 0;
}