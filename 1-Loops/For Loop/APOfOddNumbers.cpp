#include<iostream>
using namespace std;
int main(){
    //  1st method Using formula of AP
    int n;
    cout<<"Enter the Number: ";
    cin>>n;
    // for(int i=1;i<=2*n-1;i+=2){
    //     cout<<i<<",";

    // 2nd Method using extra Variable
    // int  a=1;
    // for(int i=1;i<=n;i++){
    //     cout<<a<<endl;
    //     a=a+2;
    // }    
    
    // For Gp
     int  a=1;
    for(int i=1;i<=n;i++){
        cout<<a<<endl;
        a=a*2;
    }    
}