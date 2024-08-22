// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a Number : ";
//     cin>>n;
//     if(n>99 && n<999){
//         cout<<"Three digit number";
//     }
//     else{
//         cout<<"Not three digit number";
//     }
// }

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    if(n%5==0 && n%3==0){
        cout<<"Number is divisible by 5 and 3";
    }
    else{
        cout<<"Number is not divisible by 5 and 3";
    }
}