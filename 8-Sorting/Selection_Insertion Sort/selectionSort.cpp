#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[]={2,4,2,5,7,4,5,9,1};
    int n=9;
    for(int i=0;i<n;i++){
         int min=INT_MAX;
         int mindx=-1;
         // Minimum element calculation
        for(int j=i;j<n;j++){
           if(arr[j]<min){
            min=arr[j];
            mindx=j;
           }
        }
        swap(arr[i],arr[mindx]);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}