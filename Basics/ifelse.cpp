#include<bits/stdc++.h>
using namespace std;
int main(){
    int age;
    cout<<"Enter Your age: ";
    cin>>age;
    if(age>=18){
        cout<<"You are an adult.";
    }
    else if(age>10 && age<=17) {
        cout<<"You are an teenager.";
    }
    else if(age>=1 && age<=10){
        cout<<"You are an kid.";
    }
    else{
        cout<<"Invalid age.";
    }
    return 0;
}