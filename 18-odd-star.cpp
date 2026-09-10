/*
============================================================================
QUESTION: Print odd star triangle of a given  number.

* 
* * * 
* * * * * 
* * * * * * *     

LOGIC: Use two nested for loops to control the rows and columns.

----------------------------------------------------------------------------
*/
#include<iostream>
using namespace std;
int main() { 
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    
    for(int i=1;i<=n;i++) {

/*The first outer loop uses variable i to control the rows. It runs 
 from 1 up to n to manage the vertical height of our triangle. */

       for(int j=1 ; j<=(2*i)-1 ; j++) {
/*
Inside the row, the second loop uses variable j. It runs 
 from 1 down to (2*i)-1 to print the odd star.  */ 

        cout<<"* ";
        } 
        cout<<endl;
    }
    return 0;
}
