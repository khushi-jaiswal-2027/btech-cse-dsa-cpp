/*
============================================================================
QUESTION: Print cross star of a given  odd number.

*           * 
  *       *   
    *   *     
      *       
    *   *     
  *       *   
*           * 

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
    
    for(int i=1;i<=n;i++){
/*outer loop-1 it controls rows of cross grid in which variable 
    'i' declared as an integer and initial point starting from 1. */
       for(int j=1;j<=n;j++){
/*inner loop-2 it controls  columns from 1 up to n , and  in which variable
    'j' declared as an integer and initial point starting from 1. */
            if(i == j || i + j == n + 1){
    /*If codition checks row and column indexes equal to each other  or
    sum of row and column index equal to (n + 1) .*/ 
                cout<<"* ";
            } 
            else{  
                cout<<"  ";} 
       }cout<<endl;//Cleanly moves cursor to the next line after completing a row.
    }
    return 0;
}