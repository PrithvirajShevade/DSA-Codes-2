#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter first number : ";
    cin>>a;
    cout<<"Enter second number : ";
    cin>>b;
    cout<<"Enter third number : ";
    cin>>c;
    if(a>b){
        if(a>c){  //a>b, a>c
            cout<<a<<" is largest";
        }
        else{     //c>a, c>b, 
            cout<<c<<" is largest";
        }
    }
    else{
        if(b>c){    //b>a, b>c
            cout<<b<<" is largest";
        }
        else{       //c>b, c>a
            cout<<c<<" is largest";
        }
    }
}