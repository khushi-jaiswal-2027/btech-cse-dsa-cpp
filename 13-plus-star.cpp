/*
============================================================================
QUESTION: Print plus star of a given  odd number.

      *       
      *       
      *       
* * * * * * * 
      *       
      *       
      *   

LOGIC: Using two "for loops " where  loop-1 controls rows and loop-2 controls
columns along with an if-else statement.

----------------------------------------------------------------------------
*/
#include<iostream>
using namespace std;
int main(){ 
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int q=(n/2)+1;// Integer q stores mid value of n.
    for(int i=1;i<=n;i++){
/*outer loop-1 it controls rows of plus grid in which variable 
    'i' declared as an integer and initial point starting from 1. */
       for(int j=1;j<=n;j++){
/*inner loop-2 it controls  columns from 1 up to n , and  in which variable
    'j' declared as an integer and initial point starting from 1. */
            if(i==q || j==q){
    //If codition checks row and column index equal to mid value of n. 
                cout<<"* ";
            } 
            else{  
                cout<<"  ";} 
       }cout<<endl;//Cleanly moves cursor to the next line after completing a row.
    }
    return 0;
}