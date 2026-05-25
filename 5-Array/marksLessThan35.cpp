#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the subjects:";
    cin>>a;
    cout<<"Enter the Marks";
    int marks[a];
    for(int i=0;i<=(a-1);i++){
        cin>>marks[i];
    }
    for (int i=0;i<=(a-1);i++){
        if(marks[i]<35) cout<<i<<" ";
    }
}