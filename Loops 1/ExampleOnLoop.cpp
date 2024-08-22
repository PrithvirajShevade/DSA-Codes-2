// #include<iostream>
// using namespace std;
// int main(){
//     int x;
//     cout<<"How many time you want to print : ";
//     cin>>x;
//     for(int i=1;i<=x;i++){
//         cout<<"Hello World"<<endl;
//     }
    
// }


//Print numbers from 1 to 100

// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=1;i<=100;i++){
//         cout<<i<<endl;
//     }
// }

//print all even numbers from 1 to 100
                                                        
// #include<iostream>
// using namespace std;
// int main(){
    
//     for(int i=1;i<=100;i++){   //here we can also write i=i+2 for the less time complexity
//         if(i%2==0)
//         cout<<i<<endl;
//     }
    
// }


// print the table of 19

// #include<iostream>        
// using namespace std;
// int main(){
//     for(int i=19;i<=190;i++){
//         if(i%19==0)
//         cout<<i<<endl;
//     }
// }
  

  // OR Better option with less time complexity



#include<iostream>        
using namespace std;
int main(){
    for(int i=19;i<=190;i=i+19){
        cout<<i<<endl;
    }
}
