// #include<iostream>
// using namespace std;
// int main(){
//     int a,b;
//     cout<<"Enter first number : ";
//     cin>>a;
//     cout<<"Enter second number : ";
//     cin>>b;
//     if(a>b){
//         cout<<"First is greatest";
//     }
//     else{
//         cout<<"Second is greatest";
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     float r;
//     cout<<"Enter radius : ";
//     cin>>r;
//     float area = 3.14*r*r;
//     float circumference = 2*3.14*r;
//     if(area>circumference){
//         cout<<"area is greater";
//     }
//     else{
//         cout<<"circumference is greater";
//     }

//}

// #include<iostream>
// using namespace std;
// int main(){
//     int n:
//     cout<<"Enter a year : ";
//     cin>>n;                                          //incomplete
//     if(year%400==0){
//         cout<<year<<"it is a leap year";
//     }

// }


// #include<iostream>
// using namespace std;
// int main(){
//     int length,breadth;
//     cout<<"Enter a length : ";
//     cin>>length;
//     cout<<"Enter a breadth : ";
//     cin>>breadth;
//     int area = length*breadth;
//     int perimeter = 2*(length + breadth);
//     if(area>perimeter){
//         cout<<"Area is greater";
//     }
//     else{
//         cout<<"Perimeter is greater than area";
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int a,b,c;
//     cout<<"Enter three side of triangle";
//     cin>>a>>b>>c;
//     if(a==b && b==c){
//         cout<<"It is equilateral traingle";
//     }
//     else if(a==b || a==c || b==c){
//         cout<<"It is isosclene triangle";
//     }
//     else{
//         cout<<"It is scalene triangle";
//     }

// }


// #include<iostream>
// using namespace std;
// int main(){
//     int a,b,c;
//     cout<<"Enter marks of first student : ";
//     cin>>a;
//     cout<<"Enter marks of second student : ";
//     cin>>b;
//     cout<<"Enter marks of third student : ";
//     cin>>c;
//     if(a<=b && a<=c){
//         cout<<"A scores least marks";
//     }
//     else if(b<=a && b<=c){
//         cout<<"B scores least marks";
//     }
//     else{
//         cout<<"C scores least marks";
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     float x,y;
//     cout<<"Enter x co-ordinate : ";
//     cin>>x;
//     cout<<"Enter y co-ordinate : ";
//     cin>>y;
//     if(x==0 && y==0){
//         cout<<"The point is on the origin";
//     }
//     else if(x==0 && y!=0){
//         cout<<"The point lies on y axis";
//     }
//     else if (x!=0 && y==0){
//         cout<<"The point lies on x axis";
//     }
//     else{
//         cout<<"Point lies on plane";
//     }
// }


#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter any character : ";
    cin>>ch;
    if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')){
        cout<<ch<<" It is a alphabet";
    }
    else if (ch>='0' && ch<='9'){
        cout<<ch<<" It is a digit";
    }
    else{
        cout<<ch<<" It is a special character";
    }
}