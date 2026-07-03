#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    //  string str="Saurabh Maurya is a Web Developer";
    //  cout<<str.size(); // or you can use length str.length();      0 to str.length()-1
    
    string s="abcde";
    // cout<<s;
    // ----------
    // s.push_back('h');
    // cout<<s<<endl;
    // s.pop_back();
    // ------------
    
    // cout<<s;

    // ------------
    // string t="fghi";
    // cout<<s+t<<endl;
    // s=s+t;  // both will work, this and the upper one also
    // cout<<s; 
    // s=s+"absed";
    // cout<<s; 
    // s="absed"+s;
    // ------------------

    // ------- Reversing
    reverse(s.begin(),s.end());

}