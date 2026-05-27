#include<bits/stdc++.h>
using namespace std;
void print3(int n){
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= i ; j++){
            cout<< j <<" ";
        }
        cout<<endl;
    }
}
// The function print3 takes an integer n as input and prints a pattern of numbers in a right-angled triangle. The outer loop runs n times, representing the number of rows. For each iteration of the outer loop, the inner loop runs i times, where i is the current row index (starting from 1). This means that for the first row (i=1), it prints 1 number; for the second row (i=2), it prints 2 numbers; and so on, until the nth row where it prints n numbers. After the inner loop completes for each row, a newline character is printed to move to the next line. As a result, the function prints a right-angled triangle pattern of numbers with n rows.
int main(){
    int n; 
    cin>> n ;
    print3(n);

    return 0;
}
// OUTPUT:-
// 4
// 1 
// 1 2 
// 1 2 3 
// 1 2 3 4 