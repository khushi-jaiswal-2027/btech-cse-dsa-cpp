/*
============================================================================
QUESTION: Print odd star triangle of a given  number.

* 
* * * 
* * * * * 
* * * * * * *     

LOGIC: Use  nested loop. 
The inner loop prints (2 * i) - 1 stars per row.

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

       for( int j = 1 ; j <= (2*i) - 1 ; j++ ) {
// Inner loop prints an odd number of stars for the current row.
        cout<<"* ";
        } 
        cout << endl; 
// Move to the next line after completing the row.
    }
    return 0;
}
