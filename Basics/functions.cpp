#include<bits/stdc++.h>
using namespace std;
//function is a block of code that performs a specific task. it is a reusable piece of code that can be called multiple times in a program. it can take input parameters and return output values. in this case, the function printName takes a string parameter name and prints "Hey " followed by the name.
//What is void? 
//void is a return type that indicates that the function does not return any value. it is used when the function performs a task but does not need to return any value to the caller. in this case, the function printName does not return any value, it just prints the name passed as an argument.
void printName(string name){
    cout<<"Hey "<<name<<endl;
}
int sum(int num1, int num2){
    int num3 = num1 + num2;
    return num3;
}
int main() {
    string name;
    cin>>name;
    printName(name);//in this case, the function printName is called with the argument name which is the input taken from the user. it will print "Hey " followed by the name entered by the user.

    string name1;
    cin>>name1;
    printName(name1);

    int num1, num2;
    cin>>num1>>num2;
    int result = sum(num1, num2);//in this case, the function sum is called with the arguments num1 and num2 which are the input taken from the user. it will calculate the sum of num1 and num2 and print the result.
    cout<<"The sum is: "<<result<<endl;
    return 0;
}