#include<iostream>
#include<string>
using namespace std;
int main(){
    string  s="Saurabh";
    // s[1]='o';
    // cout<<s;
 
    // Updating all the even poition in the  string
 for(int i=0;s[i]!='\0';i++){
    if(i%2==0) s[i]='a';
 }
 cout<<s;
}