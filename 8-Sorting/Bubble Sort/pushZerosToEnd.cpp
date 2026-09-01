// ?? We maintain the order of the zeroes.
#include<iostream>
using namespace std;
int main(){
    int arr[]={2,3,2,0,7,0,6,0,4};
    int n=9;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]==0){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}