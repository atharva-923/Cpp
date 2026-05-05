#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr []= {1,2,3,4,5};
    arr[0] = 6 ;
    cout<<"Array: ";
    for(int i=0; i<sizeof(arr)/sizeof(arr[0]);i++){
        cout<<arr[i]<<" ";
    }
//Array can only contain same type of data.
    int ar[5];
    int i;
    cout<<"\nEnter array:";
    cin>>ar[0]>>ar[1]>>ar[2]>>ar[3]>>ar[4];
    for(i =0;i<sizeof(arr)/sizeof(arr[0]);i++){
        cout<<ar[i]<<" ";
    }
    ar[4]+=100;
    cout<<"\nUpdated Array: ";
    for(i=0;i<sizeof(ar)/sizeof(ar[0]);i++){
        cout<<ar[i]<<" ";
    }
//2D array
    string tda[][4]={{"Cars","BMW","Mercedes","Audi"},//[rows][columns]
                   {"Fruits","Apple","Banana","Mango"},
                   {"Sports","Football","Cricket","Tennis"}
                   };
    cout<<"\n2D Array: "<<endl;
    for(i=0;i<sizeof(tda)/sizeof(tda[0]);i++){
        for(int j=0;j<sizeof(tda[i])/sizeof(tda[i][0]);j++){
            cout<<tda[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}