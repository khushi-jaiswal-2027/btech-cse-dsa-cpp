/* 
============================================================================
QUESTION: Print star hollow rectangle of a given  number.
LOGIC: Using two "for loops along with an if statement " where  loop-1 controls rows and loop-2 controls
columns.
----------------------------------------------------------------------------
*/

#include<iostream>
using namespace std;
int main(){
   int n, m;
   cout<<"Enter the row's number: ";
   cin>>n;
   cout<<"Enter the column's number : ";
   cin>>m;
   for(int i=1;i<=n;i++){
/*outer loop-1 it controls rows of rectangle grid in which variable 
    'i' declared as integer and initial point from 1 with ending n. */
        for(int j=1;j<=m;j++){
/*inner loop-2 it controls columns of rectangle grid in which variable 
    'j' declared as integer and initial point from 1 with ending m. */
            if(i==1 || i==n || j==1 || j==m){
                cout<<"* ";
//Whenever if condition satisfy it always print '*' with space .  
            }
            else{
//Whenever if condition not satisfy it always print '  ' two spaces.
               cout<<"  "; 
            } 
        }cout<<endl;
   }

}