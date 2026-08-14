#include<iostream>
using namespace std;
int main(){
    int arr[]={1,3,4,5,6,7,8,9,22,33,44,55};
    int n=12;
    int x=21;
    //  && Basic Way to  Solve it
    // for(int i=0;i<9;i++){
    //     if(arr[i]>target){
    //         cout<<arr[i-1];
    //         break;
    //     }
    // }

    // ** Much Better way
    bool flag=false;
    int lo=0;
    int hi=n-1;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(arr[mid]==x) {
            cout<<arr[mid-1];
            flag =true;
            break;
        }
        else if(arr[mid]<x) lo=mid+1;
        else hi=mid-1;
    }
    if(flag==false) cout<<arr[hi]; // in upper bound change hi to lo

}