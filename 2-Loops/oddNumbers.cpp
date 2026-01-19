#include<iostream>
using namespace std;
int main(){
    for(int i=1;i<=100;i++){
    if(i%2==0) continue; // continue means jaane do, matlab skip kr do next round aage naa jaa paaye
    cout<<i<<endl;
    }
}