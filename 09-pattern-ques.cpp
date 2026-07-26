/* 
============================================================================
QUESTION: Print the below pattern.
            a a a a a
            B B B B B
            c c c c c
            D D D D D
LOGIC: Using two "for loops along with an if statement " where  loop-1 controls rows and loop-2 controls
columns.
----------------------------------------------------------------------------
*/

#include<iostream>
using namespace std;
int main(){
   for(int i=1;i<=4;i++){
    for(int k=1;k<=5;k++){
        if(i%2!=0){// if condition check  'i'(row) is not divisible by 2 .   
            cout<<(char)(96 + i)<<" ";
    /* If 'if condition' satisfy then print
    96 + i but after converting it into character(small letter) */ 
        }else{
    /*While  'if condition' not satisfy then print
            64 + i but after converting it into character(capital letter) */  
         cout<<(char)(64 + i)<<" ";
        }  
    }cout<<endl;
   }
}