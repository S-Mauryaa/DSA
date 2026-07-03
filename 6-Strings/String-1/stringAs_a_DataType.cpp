#include<iostream>
using namespace std;
int main(){
    // string str="saurabh";
    // cout<<str;
     
    string s;
    // cin>>s; // only work if the given string have no spaces
    getline(cin,s); // VVIMP for taking inputs including spaces
    cout<<s;
}