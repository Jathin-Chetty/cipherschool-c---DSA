#include<iostream>
using namespace std;
int main(){
   float a,b;
   cout<<"Give 2 floating numbers as input"<<endl;
   cin>>a>>b;
   if(a>0.01 && b>a) // 1 and 0 //The first statement is true and the second statement is false : a=2 and 1.9=b
   {
    cout<<"The condition in if statement is correct"; //Will only be printed if the statement in the parenthesis is correct
   }
   else{
    cout<<"The condition is false";
   }
    return 0; 
    
}