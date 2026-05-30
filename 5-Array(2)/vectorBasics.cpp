#include<iostream>
#include<vector>
using namespace std;
int main(){
 vector<int> v;   // ?? you need not to mention the size.
 // ** while inserting / input dont use []
//  v.push_back(1);
//  v.push_back(3);
//  v.push_back(2);
//  v.push_back(6);
//  // `` if you want to update / access
//  v[0]=  44;
//  cout<<v[0]<<" ";
//  cout<<v[1]<<" ";
//  cout<<v[2]<<" ";
//  cout<<v[3]<<" ";
v.push_back(6);
cout << v.size() << endl;
v.push_back(1);
cout << v.size() << endl;
// v[1] =1;
v.push_back(9);
cout << v.size() << endl;
v.push_back(10);
cout << v.size() << endl;

// ----------------------------------

v.push_back(6);
cout << v.capacity() << endl;
v.push_back(1);
cout << v.capacity() << endl;
// v[1] =1;
v.push_back(9);
cout << v.capacity() << endl;
v.push_back(10);
cout << v.capacity() << endl;
}