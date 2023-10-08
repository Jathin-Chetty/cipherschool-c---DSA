#include<iostream>
using namespace std;
int main(){
    int marks;
    cout<<"Student ,please enter the marks to calculate the grade : ";

    cin>>marks;
    
    if(marks>90)
    {
        cout<<"A";
    }
    else if(marks<90 && marks >80)
    {
        cout<<"B";
    }
    else if(marks<90 && marks>70)
    {
        cout<<"C";
    }
     else
    {
        cout<<"Passs";
    }
}