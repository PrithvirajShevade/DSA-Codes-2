#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter marks : ";
    cin>>n;
    // if(n>90 && n<101){
    //     cout<<"Excellent";
    // }
    // if(n>80 && n<91){
    //     cout<<"very good";
    // }
    // if(n>70 && n<81){
    //     cout<<"Good";
    // }
    // if(n>60 && n<71){
    //     cout<<"can do better";
    // }
    // if(n>50 && n<61){
    //     cout<<"Average";
    // }
    // if(n>=40 && n<51){
    // cout<<"below avg";
    // }
    // if(n<40){
    //     cout<<"fail";
    // }

    //OR (WITH NESTED IFELSE)


//     if(n>=91){
//         cout<<"Excellent";
//     }
//     else{
//         if(n>=81){
//             cout<<"very good";
//         }
//         else{
//             if(n>=71){
//                 cout<<"good";
//             }
//             else{
//                 if(n>=61){
//                     cout<<"can do better";
//                 }
//                 else{
//                     if(n>=51){
//                         cout<<"avg";
//                     }
//                     else{
//                         if(n>=41){
//                             cout<<"below avg";
//                         }
//                         else{
//                             cout<<"Fail";
//                         }
//                     }
//                 }
//             }
//         }
//     }

//OR (With Else-if)


   if(n>=91){
    cout<<"Excellent";
   }
   else if(n>=81){
    cout<<"Very good";
   }
   else if(n>=71){
    cout<<"good";
   }
   else if(n>=61){
    cout<<"can do better";
   }
   else if(n>51){
    cout<<"avg";
   }
   else if(n>=41){
    cout<<"below avg";
   }
   else{
    cout<<"fail";
   }







 }