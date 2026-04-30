#include<iostream>//it is a header file which includes input and output functions of c++.
#include<bits/stdc++.h>//it is a header file which includes all the header files of c++.
using namespace std;
int main(){
    // int x,y;
    // cout<<"Atharva";
    // cin>>x>>y;
    // cout<<x<<"\n"<<y;
    string s = "Atharva patil";
    cout<<s;//it will only print the first word of the string because it will stop at the space.
    
    string str;
    getline(cin,str);//get line is used to take input with space.
    cout<<str;
    return 0;
}   