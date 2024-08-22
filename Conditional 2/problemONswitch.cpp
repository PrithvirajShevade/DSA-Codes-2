#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter first number :  ";
    cin>>a;
    cout<<"Enter a second number : ";
    cin>>b;
    char op;
    cout<<"Enter a operator : ";
    cin>>op;
        switch(op){
        case '+' :
            cout<<a+b;
            break;
        case '-' :
            cout<<a-b;
            break;
        case '*' :
            cout<<a*b;
            break;
        case '/' :
            cout<<a/b;
            break;
    }
}





//using ifelse condition


// #include<iostream>
// using namespace std;
// int main(){
//     int a,b;
//     cout<<"Enter first number :  ";
//     cin>>a;
//     cout<<"Enter a second number : ";
//     cin>>b;
//     char ch;
//     cout<<"Enter a operator : ";
//     cin>>ch;
//     if(ch=='+') cout<<a+b;
//     if(ch=='-') cout<<a-b;
//     if(ch=='*') cout<<a*b;
//     if(ch=='/') cout<<a/b;
// }