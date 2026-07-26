/* 
============================================================================
QUESTION: Print the below pattern.
            a a a a a
            B B B B B
            c c c c c
            D D D D D
LOGIC: Using two "for loops along with an if-else statement " where  loop-1 controls rows and loop-2 controls
columns.
----------------------------------------------------------------------------
*/

#include<iostream>
using namespace std;
int main(){
   for(int i=1;i<=4;i++){
// Outer loop-1: Controls the rows of the grid (1 to 4)
    for(int k=1;k<=5;k++){
// Inner loop-2: Controls the columns inside each row (1 to 5)
        if(i%2!=0){
// if condition checks if 'i'(row) is not divisible by 2 .   
            cout<<(char)(96 + i)<<" ";
/* If 'if condition' is satisfied then print
96 + i but after converting it into character(small letter) */ 
        }else{
//When  'if condition' not satisfied .  
         cout<<(char)(64 + i)<<" ";
// Print 64 + i but after converting it into character(capital letter) .
        }  
    }cout<<endl;
   }
}