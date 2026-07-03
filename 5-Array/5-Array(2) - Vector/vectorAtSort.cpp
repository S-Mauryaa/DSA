#include<iostream>
#include<vector>
#include <algorithm> // required for sort
using namespace std;
int main(){
    vector<int>v;
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    // we use at to give output
    cout<<v.at(2)<<endl;
    // we also use at to change the value
    v.at(2) = 7;
    cout<<v.at(2);

    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }
    cout<<endl;

    // for sorting the array in vector
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
}