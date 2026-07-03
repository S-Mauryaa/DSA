#include<iostream>
#include<string>
using namespace std;
int main(){
    // string s="abcedf";
    // s.substr(idx,lenght) index se aage ki value aayegi
    // cout<<s.substr(2,4);
    
    // printing the second half in even string
    string str;
    cout<<"enter the string";
    getline(cin,str);
    int n=str.length();
    cout<<str.substr(n/2);
} 