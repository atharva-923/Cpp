#include<bits/stdc++.h>
using namespace std;
int main(){
    int age;
    cout<<"Enter Your age: ";
    cin>>age;
    if(age>=18){
        cout<<"You are an adult.";
    }
    else if(age>10 && age<=17) {}
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
//------------------------------Question--------------------------------------------
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int age ;
//     cout<<"Enter age:";
//     cin>>age;
//     if(age<18){
//         cout<<"not eligible for job";
//     }
//     else if(age<=54){//if age is greater than or equal to 18 and less than or equal to 54 then it will print eligible for job.
//         cout<<"Eligible for job";
//     }
//     else if(age<=57){//if age is greater than 54 and less than or equal to 57 then it will print eligible for job but retirement soon.
//         cout<<"Eligible for job, but retirement soon";
//     }
//     else{//if age is greater than 57 then it will print retirement.
//         cout<<"Retirement";
//     }        
//     return 0;
// }