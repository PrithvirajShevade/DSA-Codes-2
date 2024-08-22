// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the value of n : ";
//     cin>>n;
//     for(int i=1;i<=2*n-1;i+=2){
//         cout<<i<<endl;
//     }
// }

//Without using AP

#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter a number : ";
    cin>>x;
    int a = 1;
    for(int i=1;i<=x;i++){
        cout<<a<<endl;
        a = a + 2;
    }
}