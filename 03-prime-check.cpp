/*
============================================================================
QUESTION: Print whether number is Prime or not  .
LOGIC: Using a "for loop" along with "if" and "else if" statements.
----------------------------------------------------------------------------
*/
#include<iostream>
using namespace std;
int main(){
    int n;//Variable 'n' declared as int
    cout<<"Enter the number: ";
    cin>>n;
    cout<<"The factors of "<<n<<" are: ";
    int factors=0;//Initialized to 0 to prevent memory garbage bugs
    
    for(int i=1;i<=n;i++){/* int i=1 defines initial point of
    loop, i<=n defines the condition up to which the loop runs and i++
    (i=i+1) it updates after each loop completion.*/
        if(n%i==0){// Checking divisibility of n.
            cout<<i<<" ";
            factors++;
        /*Whenever the if condition is satisfied, the factors count 
           increases by 1 */
        }
    }
    cout<<endl;
    if(factors==1 || factors==0){
        cout<<n<<"  is neither prime nor composite number.";
    }
    else if(factors<=2){
        cout<<n<<"  is prime number.";
    }
    else{
        cout<<n<<"  is composite number";}
    return 0;
}