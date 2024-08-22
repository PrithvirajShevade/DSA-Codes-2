#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter a character : ";
    cin>>ch;
    int asciii = (int)ch;
    if(asciii>=65 && asciii<=90 || asciii>=97 && asciii<=122){
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
            cout<<"It is a vowel";
        }
        else{
            cout<<"It is a consonent";
        }
    
    }
    else{
        cout<<"It is a not a alphabet";
    }
}