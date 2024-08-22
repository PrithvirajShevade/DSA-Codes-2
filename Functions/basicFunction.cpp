//in projectt we always tend to use same/similar piece of code int the project multiple times,but not always we are looking for contineous repetetation. 
// #include<iostream>
// using namespace std;
// int main(){
//     int a,b,c;
//     cin>>a>>b>>c;
//     for(int i=1;i<=a;i++){
//         for(int j=1;j<=i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     for(int i=1;i<=b;i++){
//         for(int j=1;j<=i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     for(int i=1;i<=c;i++){
//         for(int j=1;j<=i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }

//OR

// #include<iostream>
// using namespace std;
// void greeting (){
//     cout<<"Good Morning"<<endl;
//     cout<<"How are you"<<endl;
// }
// int main(){
//     greeting();  // this is call function calling
//     greeting();
//     greeting();
// }


//Arguments in function 

#include<iostream>
using namespace std;
void startriangle(int x){
    for(int i=1;i<=x;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
int main(){
    startriangle(3);
    startriangle(4);
    startriangle(5);
}