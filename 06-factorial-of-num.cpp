/*
============================================================================
QUESTION: Factorial of given the number.
LOGIC: Using of "for loop ".
----------------------------------------------------------------------------
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    long long factorial = 1;/* Initializing factorial to 1 */
    if(n ==0 || n == 1) factorial=1;/* Factorial of 0 and 1 is 1 */
    else
    for(int i = 1; i <= n; i++){
        factorial *= i;/* Multiplying factorial by i in each iteration */
    }
    cout<<"Factorial of "<<n<<" is: "<<factorial;
    return 0;
}