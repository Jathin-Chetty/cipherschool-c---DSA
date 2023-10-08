#include<iostream>
using namespace std;
int main(){
    int a[9];
    int i;

    // cout<<"Give 5 integers as input";

    // for(i=0;i<5;i++){
    //     cin >>a[i];
    // }

    // cout<<"the 5 inuputs are : "<< endl;

    //     for(i=0;i<5;i++){
    //     cout<<a[i];
    // }


    cout<<"Give 10 integers as input";

    for(i=0;i<10;i++){
        cin >>a[i];
    }

    cout<<"the 10 inuputs are : "<< endl;

        for(i=9;i>=0;i--){
        cout<<a[i];
    }
}