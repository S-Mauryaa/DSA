#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter the rows and columns ";
    cin>>n>>m;
    for(int  i=1;i<=n;i++){
        for(int  i=1;i<=m;i++){
            cout<<"*";
        }
        cout<<endl;
    }
}