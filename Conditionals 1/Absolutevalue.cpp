// #include<iostream>
// using namespace std;
// int main(){
//     cout<<"Enter a integer : ";
//     int n;
//     cin>>n;
//     if(n>0){       //Absolute value means we are taking a MOD of any number
//         cout<<n;    //example: |-2|=2 
//     }
//     else{
//         cout<<-n;
   // }
//}


//OR


#include<iostream>
using namespace std;
int main(){
    cout<<"Enter a integer : ";
    int n;
    cin>>n;
    if(n<0){
        n = -n;
    }
    cout<<n;
}