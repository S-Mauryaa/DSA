#include<iostream>
using namespace std;
int main(){
    int n,x;
    cout<<"enter the size of the array";
    cin>>n;
    cout<<"enter the elements of the array";
    int arr[n];
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    int min=arr[0]; // or we can use max=INT_MIN   -> that takes the lowest or minimum value
    for(int i=0;i<=n-1;i++){
        if(min>arr[i]) min=arr[i];
    }
    cout<<"Minimum Value is ="<<min;
}