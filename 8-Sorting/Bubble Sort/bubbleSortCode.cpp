#include<iostream>
using  namespace std;
int main(){
    int arr[6]={7,2,3,4,5,8};
    int n=6;
    // for(int  i=0;i<6;i++){
    //     cout<<arr[i];
    // }
    // Bubble Sort
    // for(int i=0;i<n-1;i++){
    //     for(int  j=0;j<n-1-i;j++){ // Traverse
    //         if(arr[j]>arr[j+1]){ // Swapp
    //             // int temp=arr[j];
    //             // arr[j]=arr[j+1];
    //             // arr[j+1]=temp;
    //             // * or swapping shortcut
    //             swap(arr[j],arr[j+1]);
    //         }
    //     }        
    // }

    // ^^ Bubble Sort Optimized
    for(int i=0;i<n-1;i++){
          bool flag=true;
        for(int  j=0;j<n-1-i;j++){ // Traverse
          
            if(arr[j]>arr[j+1]){ // Swapp
                swap(arr[j],arr[j+1]);
                flag =false;
            }
        }        
        if(flag==true){ // swap didn't happend
            break;
        }
    }


    cout<<endl;
    for(int  i=0;i<6;i++){
        cout<<arr[i];
    }

    // ** To check if the array is sorted or not
    // bool flag=true;
    // for(int i=0;i<n-1;i++){
    //     if(arr[i]>arr[i+1]){
    //         flag =false;
    //         break;
    //     }
    // }
    // if(flag==false) cout<<"array is not sorted";
    // else cout<<"array is sorted";
}