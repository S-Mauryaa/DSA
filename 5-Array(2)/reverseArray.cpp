// ** copy the content of one array into another in the reverse order

#include<iostream>
#include<vector>
using namespace std;
  void display(vector<int>& a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
  }
int main(){
vector<int> v;
v.push_back(4);
v.push_back(6);
v.push_back(1);
v.push_back(8);
v.push_back(3);
 display(v);

 // @@   reverse
 // %% using while loop
    // int i=0;
    // int j=v.size()-1;    
    // while(i<=j){
    //     int temp=v[i];
    //     v[i]=v[j];
    //     v[j]=temp;
    //     i++;
    //     j--;
    // }
// ** we can give two or more than two initialization,condition or increment and decrement in a single for loop
for(int i=0,j=v.size()-1;i<=j;i++,j--){
    int temp=v[i];
    v[i]=v[j];
    v[j]=temp;
}
    display(v);

}