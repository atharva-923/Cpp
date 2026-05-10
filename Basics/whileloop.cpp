#include<bits/stdc++.h>
using namespace std;
int main() {
    int i = 1;
    while(i<=10){//while loop is used to execute a block of code repeatedly as long as the condition is true. it has two parts, condition and block of code. the condition is checked before the execution of the block of code. if the condition is true then the block of code will be executed otherwise it will stop.
        cout<<"Atharva "<< i <<endl;
        i++;
    }
    int i =11 ;
    do {//do while loop is similar to while loop but it will execute the block of code at least once even if the condition is false because the condition is checked after the block of code is executed.
        cout<<"Atharva "<<i<<endl;
    }
    while(i<=10);//in this case, the condition is false but the block of code will be executed once and it will print "Atharva 11" and then the loop will stop because the condition is false.
    return 0;
}