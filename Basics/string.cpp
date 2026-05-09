#include<bits/stdc++.h>
using namespace std;
int main(){
    string s = "Atharva";
    int len = s.length();//length function is used to find the length of the string.
    cout<<len<<endl;//output will be 7 because there are 7 characters in the string "Atharva".
    s[len] = 's';//Wont change anything.
    s[len-1] = 's';//we are changing the value of last character of string to s.
    //Why [len-1] because the index of string starts from 0 and ends at len-1. So, to change the value of last character we have to use [len-1].For example, in the string "Atharva", the A - 0 and a - 6 so, to change the value of last character we have to use [len-1] which is 6. 
    cout<<s[len-1];//output will be A because we have changed the value of last character of string to s.
    return 0;
}