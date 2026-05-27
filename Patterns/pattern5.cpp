#include<bits/stdc++.h>
using namespace std;
void print5(int n){
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n-i ; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
// The function print5 takes an integer n as input and prints a pattern of asteris in an inverted right-angled triangle. The outer loop runs n+1 times, representing the number of rows. For each iteration of the outer loop, the inner loop runs n-i times, where i is the current row index (starting from 0). This means that for the first row (i=0), it prints n asteris; for the second row (i=1), it prints n-1 asteris; and so on, until the nth row where it prints 0 asteris. After the inner loop completes for each row, a newline character is printed to move to the next line. As a result, the function prints an inverted right-angled triangle pattern of asteris with n rows.
int main(){
    int n ; 
    cin>> n ;
    print5(n);

    return 0 ;
}
// OUTPUT:-
// 5
// *****
// ****
// ***
// **
// *