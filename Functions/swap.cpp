// // using extra variable

// #include<iostream>
// using namespace std;
// int main(){
//     int a,b;
//     cin>>a>>b;
//     int temp = a; // a = 3, b = 8
//     a = b;  // a = 8
//     b = temp;  // b = 3
//     cout<<a<<" "<<b;
// }


// Not using extra variable

#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    a = a + b;
    b = a - b;
    a = a - b;
    cout<<a<<" "<<b;
}
