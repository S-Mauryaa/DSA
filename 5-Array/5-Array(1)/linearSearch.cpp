#include<iostream>
using namespace std;
int main(){
    int n,x;
    cout<<"Enter the Size of the Array"<<endl;
    cin>>n;
    cout<<"Enter the values of the Array";
    int arr[n];
    for(int i=0;i<=n-1;i++){
      cin>>arr[i];
    }
    cout<<"Enter the number to find in array"<<endl;
    cin>>x;
    // Search 
    // checkmark is added in this because we need just to check if the element is there or not.. 
    bool flag=false;
    for(int i=0;i<=n-1;i++){
    if(arr[i]==x) flag=true;
}
if(flag==true) cout<<"Element found";
else cout<<"Element not found";
    
}