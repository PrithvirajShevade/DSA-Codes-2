#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter a first side : ";
    cin>>a;
    cout<<"Enter a second side : ";
    cin>>b;
    cout<<"Enter a third side : ";
    cin>>c;
    if ((a+b>c) && (b+c>a) && (a+c>b)){
        cout<<a<<b<<c<<"They are sides of trinagle";
    }
    else{
        cout<<"not sides of triangle";
    }

}