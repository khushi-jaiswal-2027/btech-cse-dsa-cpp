/*
============================================================================
QUESTION: Print right-angled alphanum triangle of a given  number.

1
A B
1 2 3
A B C D
1 2 3 4 5
A B C D E F

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
/*outer loop-1 it controls rows of triangle grid in which variable 
    'i' declared as an integer and initial point from 1. */
       for(int j=1;j<=i;j++){
/*inner loop-2 it controls  columns up to ongoing  row, and  in which variable
    'j' declared as an integer and initial point from 1. */
            if(i%2==0) cout<<(char)(64 + j)<<" ";
// If i is divisible by 2 then prints 64 + j after converting it into character.
            else cout<<j<<" "; 
//  If i is not divisible by 2 then prints j .
       }cout<<endl;//Cleanly moves cursor to the next line after completing a row.
    }
    return 0;
}