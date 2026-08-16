/*
============================================================================
QUESTION: Print number triangle of a given  number.

1 
0 1 
1 0 1 
0 1 0 1 
1 0 1 0 1 
0 1 0 1 0 1 

LOGIC: Use two nested for loops to control the rows and columns
 along with an if-else statement.

----------------------------------------------------------------------------
*/
#include<iostream>
using namespace std;
int main(){ 
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    
    for(int i=1;i<=n;i++){
/* Outer loop controls the rows. The loop variable 'i' tracks the 
current row index. */
       for(int j=1;j<=i;j++){
/*Inner loop controls the columns. The loop variable 'j' tracks the 
current column index. */ 
            if( (i + j) % 2 == 0 ){
    /*If the sum of the row and column indices is even, print 1..*/ 
                cout<<"1 ";
            } 
            else{  
                cout<<"0 ";} 
       }cout<<endl;//Cleanly moves cursor to the next line after completing a row.
    }
    return 0;
}