#include<iostream>
using namespace std;
// void greeting(){
//     cout<<"Hello"<<endl;
//     cout<<"How are you"<<endl;
// }
// int main(){
//     greeting();
//     greeting();
//     greeting();
//     greeting();
// }

void starTriangle(int x){
    for(int i=1;i<=x;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
int main(){
    starTriangle(2);
    starTriangle(3);
    starTriangle(4);
}