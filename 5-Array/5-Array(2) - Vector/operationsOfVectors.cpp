#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(5);
    v.push_back(7);
    v.push_back(1);
    v.push_back(3);
    v.push_back(5);
    v.push_back(7);
    v.push_back(1);
    v.push_back(3);
    v.push_back(5);
    v.push_back(7);

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<"Size is= "<<v.size()<<endl;
    cout<<"capacity is= "<<v.capacity()<<endl;
    cout<<endl;

    v.pop_back();
    v.pop_back();
    
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    
    cout<<endl<<"Size is= "<<v.size()<<endl;
    cout<<"capacity is= "<<v.capacity()<<endl;
    //  % important thing to note down that the capacity remains same, but the size gets changed
    

}