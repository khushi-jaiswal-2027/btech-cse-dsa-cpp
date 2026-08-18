/*
============================================================================
QUESTION: Print vertically flipped triangle of a given  number.

            * 
          * * 
        * * * 
      * * * * 
    * * * * * 
  * * * * * * 
* * * * * * * 

LOGIC: Use three nested for loops to control the rows and columns.

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

       for(int j=n-1 ; j>=i ; j--) {
/*
Inside the row, the second loop uses variable j. It runs backwards
 from n-1 down to i to print the empty blank spaces. This shifts our triangle
  to the right side of the screen. */ 

           cout<<"  ";
        } 
        for(int k=1 ; k<=i ; k++) { 

/*Right after the spaces finish, the third loop uses variable k to run
    from 1 up to i. This prints the actual stars on the same line, matching
      the row number. */

            cout<<"* ";
        }cout<<endl;
/*Cleanly moves cursor to the next line after 
       completing a row.*/    
    }
    return 0;
}
