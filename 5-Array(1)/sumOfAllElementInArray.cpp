#include<iostream>
using namespace std;
int main(){
    // Taking Input in the Array From the  User
    int n;
    cout<<"Enter the Size of the Array"<<endl;
    cin>>n;
    cout<<"Enter the values of the Array";
    int arr[n];
    for(int i=0;i<=n-1;i++){
      cin>>arr[i];
    }
    int sum=0;
    for(int i=0;i<=n-1;i++){
        sum=sum+arr[i];
    }
    cout<<sum;
}