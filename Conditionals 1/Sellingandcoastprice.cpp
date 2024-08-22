#include<iostream>
using namespace std;
int main(){
    int c,s;
    cout<<"Enter a coast price : ";
    cin>>c;
    cout<<"Enter a selling price : ";
    cin>>s;
    if(s>c){
        cout<<"Profit = "<<s-c;
    }
    if(s<c){
        cout<<"Loss = "<<c-s;
    }
    if(s==c){
        cout<<"No Profit,No Loss!";
    }

}