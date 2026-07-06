#include<iostream>
using  namespace std;
int main(){
    int arr[6]={5,2,3,6,5,8};
    int n=6;
    for(int  i=0;i<6;i++){
        cout<<arr[i];
    }
    // Bubble Sort
    for(int i=0;i<n-1;i++){
        for(int  j=0;j<n-1-i;j++){ // Traverse
            if(arr[j]>arr[j+1]){ // Swapp
                // int temp=arr[j];
                // arr[j]=arr[j+1];
                // arr[j+1]=temp;
                // * or swapping shortcut
                swap(arr[j],arr[j+1]);
            }
        }
        
    }
    cout<<endl;
    
    for(int  i=0;i<6;i++){
        cout<<arr[i];
    }
}