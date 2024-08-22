#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    if(n%5==0){
        if(n%3==0){
            cout<<"Divisible by both";
        }
        else{
            cout<<"divisible by 5 but not 3";
        }
    }
    else {
        cout<<"not";
    }
}