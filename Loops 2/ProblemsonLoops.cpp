//Count digit of a given numbers.
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a number : ";
//     cin>>n;
//     int count=0;
//     int a = n;
//     while(n>0){
//         n/=10;
//         count++;
//     }
//     if(a==0) cout<<1;
//     else cout<<count;
// }

//Print sum of digits of a given number

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a number : ";
//     cin>>n;
//     int sum = 0;
//     int lastdigit=0;
//     while(n>0){
//         lastdigit = n%10;
//         sum += lastdigit;
//         n/=10;
//     }
//     cout<<sum;

// }


// print a reverse number

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a number : ";
//     cin>>n;
//     int lastdigit =0;
//     int reverse = 0;
//     while(n>0){
//         reverse = reverse*10;
//         lastdigit = n%10;
//         reverse +=lastdigit;
//         n/=10;
        
//     }
//     cout<<reverse;
    
// }

//print the sum of the series

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a number : ";
//     cin>>n;
//     int sum = 0;
//     for(int i=1;i<=n;i++){
//         if(i%2!=0) sum +=i;
//         else sum -=i;
//     }
//     cout<<sum;

// }

//OR

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a number : ";
//     cin>>n;
//     int sum = 0;
//     if(n%2==0) sum = -n/2;
//     else sum = -n/2 + n; 
//     cout<<sum;
// }


