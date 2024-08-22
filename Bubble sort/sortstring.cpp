#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s = "AZYZXERJXSKD";
    string str;
    for(int i=0;i<s.length();i++){
        if(s[i]>='X'){
            str.push_back(s[i]);
        }
    }
    cout<<str;
    cout<<endl;
    //bubble sort
    for(int i=0;i<str.length()-1;i++){
        for(int j=0;j<str.length()-1-i;j++){
            if(str[j]>str[j+1]){
                //swap
                swap(str[j],str[j+1]);
            }
        }
    }
    for(int i=0;i<str.length();i++){
        cout<<str[i]<<" ";
    }
}
