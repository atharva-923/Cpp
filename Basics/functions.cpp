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

    int maxx(int num1, int num2){
        if(num1>=num2){
            return num1;
        }

//looking for a return line.
            return num2;
    }
    void increment(int num){
        cout<<num<<endl;
        num +=5;
        cout<<num<<endl;
        num +=5;
        cout<<num<<endl;
    }
//the & symbol is used to indicate that the parameter num is passed by reference. this means that any changes made to num within the function will affect the original variable passed as an argument.
    void incrementByReference(int &num){
        cout<<num<<endl;
        num +=5;
        cout<<num<<endl;
        num +=5;
        cout<<num<<endl;
    }

    int main() {
        string name;
        cin>>name;
        printName(name);
//in this case, the function printName is called with the argument name which is the input taken from the user. it will print "Hey " followed by the name entered by the user.

    string name1;
        cin>>name1;
        printName(name1);

    int num1, num2;
        cin>>num1>>num2;
    int result = sum(num1, num2);
//in this case, the function sum is called with the arguments num1 and num2 which are the input taken from the user. it will calculate the sum of num1 and num2 and print the result.
        cout<<"The sum is: "<<result<<endl;

    int maximum = maxx(num1, num2);
//in this case, the function maxx is called with the arguments num1 and num2 which are the input taken from the user. it will compare num1 and num2 and return the maximum of the two numbers. the result is stored in the variable maximum and printed to the console.
        cout<<"The maximum is: "<<maximum<<endl;
    int num =10;
        increment(num);
//In C++, when you pass a variable to a function, it is passed by value, meaning that a copy of the variable is created and used within the function. therefore, when we call increment(num), it will print 10, then 15, and then 20, but the original num in the main function will still be 10.
        cout<<num<<endl;
        cout<<"Now we will increment by reference."<<endl;
        incrementByReference(num);
        cout<<num<<endl;
//In this case, when we call incrementByReference(num), it will print 10, then 15, and then 20, and the original num in the main function will also be updated to 20 because we passed it by reference using the & symbol in the function parameter.
        return 0;
}