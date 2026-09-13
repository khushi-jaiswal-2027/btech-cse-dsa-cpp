/*
============================================================================
QUESTION: Print odd star triangle of a given  number.

        * * * * * 
      * * * * * 
    * * * * * 
  * * * * * 
* * * * * 
    
LOGIC: Use  nested loop. 
One outer 'for loop' and two inner 'for loop' . 
----------------------------------------------------------------------------
*/
#include<iostream>
using namespace std;
int main() { 
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    for( int i = 1 ;i <= n ; i++ ) {

// Outer loop controls the number of rows. 


// First inner loop for spaces.  

       for( int j = n - 1 ; j >= i ; j-- ) {
        cout<<"  ";
        }
// Second inner loop for star square.  

        for( int j = 1 ; j<=n ; j++ ) {
            cout<<"* ";
        } 
        cout << endl; 
// Move to the next line after completing the row.
    }
    return 0;
}
