#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter the charatcer : ";
    cin>>ch;
    int asciii = (int)ch;
    if(asciii>=97 && asciii<=122 || asciii>=65 && asciii<=90){
        cout<<"Character is alphabet";
    }
    else{
        cout<<"Character is not alphabet";
    }
    
}
