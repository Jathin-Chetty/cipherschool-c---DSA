#include<iostream>
using namespace std;
int main(){
    int a,b,c,d;

    
    // cout<<"Give three integers as input : a,b,c"<<endl;
    // cin>>a>>b>>c>>d;
    // if(a>b && c>d)
    // {
    //     cout<<"haha";
    // }
    // else if(a>b && c>d){
    //     cout<<"hehe";
    // }
    // else{
    //     cout<<"huhu";
    // }


    cout<<"enter a integer a";
    cin>>a;
    switch(a){
        case 1:
        cout<<"The value of a is 1"<<endl;
        break;
         case 2:
        cout<<"The value of a is 2"<<endl;
        break;
        case 3:
        cout<<"The value of a is 3"<<endl;
        default:
        cout<<"default will be always printed";
        break;
    }
    return 0;
}