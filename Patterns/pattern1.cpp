#include<bits/stdc++.h>
using namespace std;
void print1(int n){
    for(int i = 0 ; i < n ; i++){//outer loop for rows
        for(int j = 0 ; j < n ; j++){//inner loop for columns
            cout<<"* ";
        }
        cout<<endl;
    }
}
// The function print1 takes an integer n as input and prints a square pattern of asteris. The outer loop runs n times, representing the number of rows. For each iteration of the outer loop, the inner loop also runs n times, printing an asterisk followed by a space for each column in that row. After the inner loop completes for a row, a newline character is printed to move to the next line. As a result, the function prints an n x n grid of asterisks.
int main(){
    int n;
    cin>>n;
    print1(n);

    return 0;
}
// OUTPUT:-
// 4
// * * * * 
// * * * * 
// * * * * 
// * * * * 