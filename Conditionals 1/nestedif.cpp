#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    if(n%5==0 || n%3==0){
        if(n%15!=0){
            cout<<"Number is divisible by 3 or 5";
        }
        else{
            cout<<"Not divisible";
        }
    }
    else{
        cout<<"Not matching";
    }


}