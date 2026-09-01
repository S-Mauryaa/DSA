#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main(){
    string str="Saurabh is a web developer";
    stringstream ss(str);
    string temp;
    while(ss>>temp){
        cout<<temp<<endl; 
    }
}