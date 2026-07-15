#include<iostream>
using namespace std;
int main(){
    int arr[]={1,3,4,5,6,7,8,9,22,33,44,55};
    int n=12;
    int target=21;
    for(int i=0;i<9;i++){
        if(arr[i]>target){
            cout<<arr[i-1];
            break;
        }
    }
}