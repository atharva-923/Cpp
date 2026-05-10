#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Atharva Patil\n";// prints once and moves to the next line.
    //what if i want to print 100 times? cant write 100 cout statements. so we will use for loop.
    cout<<"FOR LOOP:- \n";
//for loop has three parts. initialization, condition and increment/decrement.
//initialization: it is used to initialize the loop variable. it is executed only once at the beginning of the loop.
//condition: it is used to check the condition for the loop to execute. if the condition is true then the loop will execute otherwise it will stop.
//increment/decrement: it is used to update the loop variable. it is executed after each iteration of the loop. it can be increment or decrement depending on the requirement.
//i<=10 means that the loop will execute as long as i is less than or equal to 10. when i becomes 11, the condition will be false and the loop will stop.
// i++ means that after each iteration, i will be incremented by 1. so the loop will execute 10 times and print "Atharva Patil" followed by the value of i in each iteration.
    int i;
    for(i = 1 ; i <= 10; i++){
        cout<<"Atharva Patil "<<i<<endl;
    }
    cout<<i<<endl;//it will print 11 because after the last iteration i will be incremented to 11 and then the loop will stop.
    return 0;
}