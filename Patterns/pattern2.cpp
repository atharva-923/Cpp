#include<bits/stdc++.h>
using namespace std;
void print2(int n){
    for(int i = 0 ; i<n ; i++){
        for(int j = 0 ; j<=i ; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
//same here the outer loop runs n times, representing the number of rows. For each iteration of the outer loop, the inner loop runs i+1 times, where i is the current row index (starting from 0). This means that for the first row (i=0), it prints 1 asterisk; for the second row (i=1), it prints 2 asterisks; and so on, until the nth row where it prints n asterisks. After the inner loop completes for each row, a newline character is printed to move to the next line. As a result, the function prints a right-angled triangle pattern of asteris with n rows.
int main(){
    int n;
    cin>>n;
    print2(n);

    return 0;
}
// OUTPUT:-
// 4
// *
// **
// ***
// ****