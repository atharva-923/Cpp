#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr []= {1,2,3,4,5};
    arr[0] = 6 ;//we can change the value of array but we cannot change the size of array.
    cout<<"Array: ";
    for(int i=0; i<sizeof(arr)/sizeof(arr[0]);i++){
        cout<<arr[i]<<" ";//output will be 6 2 3 4 5 because we have changed the value of first element of array to 6.
    }
    //Array can only contain same type of data.
    int ar[5];//we can declare an array without initializing it but we have to specify the size of array.
    int i;
    cout<<"\nEnter array:";
    cin>>ar[0]>>ar[1]>>ar[2]>>ar[3]>>ar[4];//we can take input of array from user.
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
    for(i=0;i<sizeof(tda)/sizeof(tda[0]);i++){//sizeof(tda) will give the size of the whole array and sizeof(tda[0]) will give the size of the first row. so we are dividing the size of whole array by the size of first row to get the number of rows in the array.
        for(int j=0;j<sizeof(tda[i])/sizeof(tda[i][0]);j++){
            //sizeof(tda[i]) will give the size of the row and sizeof(tda[i][0]) will give the size of the column. so we are dividing the size of row by the size of column to get the number of columns in that row.
            cout<<tda[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}