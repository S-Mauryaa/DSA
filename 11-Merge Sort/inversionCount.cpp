// -- Sortest method(But on eficient)
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={5,1,8,2,3};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     int count=0;
//     for(int i=0;i<n-1;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[i]>arr[j]) count++;
//         }
//     }
//     cout<<count;
// }

#include<iostream>
#include<vector>
using namespace std;
int c=0;
int inversion(vector<int>&a,vector<int>&b){
    int count=0;
    int i=0;
    int j=0;
    while(i<a.size() && j<b.size()){
        if(a[i]>b[j]){
            count+=(a.size()-i);
            j++;
        }
        else{
            i++;
        }
    }
    return count;
}
void merge(vector<int>&a,vector<int>&b,vector<int>&res){
      int i=0,j=0,k=0; 
      while(i<a.size() && j<b.size()){
         if(a[i]<b[j]) res[k++]=a[i++];
         else res[k++]=b[j++];
    }
    if(i==a.size()) while(j<b.size()) res[k++]=b[j++]; 
    if(j==b.size()) while(i<a.size())res[k++]=a[i++]; 
}
void mergeSort(vector<int>& v){
    int n=v.size();
    if(n==1) return;
    int n1=n/2;
    int n2=n-n/2;
    vector<int> a(n1),b(n2); // vector a with size n1, vector b with size n2
    // copy pasting
    for(int i=0;i<n1;i++){
        a[i]=v[i];
    }
    for(int i=0;i<n2;i++){
        b[i]=v[i+n1];
    } 
    mergeSort(a);
    mergeSort(b);
    // Before merging we will count the inversions 
    c+=inversion(a,b);
    merge(a,b,v); // merge
    a.clear(); // to clear the space
    b.clear(); // to clear the space
}
int main(){ 
    int arr[]={1,5,4,2,8,5,3,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int>v(arr,arr+n); //  same as array, copy of it
    mergeSort(v); 
    cout<<c;
}