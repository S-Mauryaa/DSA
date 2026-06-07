// ** Question-- Find the Last occurence of x in the array, (mtlb x ki last value jo appear hui)

#include<iostream>
#include<vector>
using namespace std;
int main(){
 vector<int> a;
 a.push_back(4);
 a.push_back(7);
 a.push_back(45);
 a.push_back(98);
 a.push_back(8);
 a.push_back(48);
 a.push_back(98);
 int x=98;
 int idx=-1;
//  for(int i=0;i<a.size();i++){ //  we are doing farward loop, but it creates an issue
//     if(a[i]==x) idx=i;        //  it travels whole loop
//  }
for(int i=a.size()-1;i>=0;i--){
    if(a[i]==x)
    idx=i;
    break;
}
 cout<<idx;
}