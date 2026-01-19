//  Using Break  Statement


#include<iostream>
using  namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    // Easy way to Solve the Problem....
    // for(int i=2;i<=n-1;i++){
    //     if(n%i==0)
    //     cout<<n<<" is a composite number"<<endl;
    //     else cout<<n<<" is a  prime  Number";
    //     break;
    // }
    // if(n==1) cout<<"1 is Neither prime  nor composite";

// A  Little  tough way to Solve it by using a containerr to store a value..
bool flag =true;
for(int i=2;i<=n-1;i++){
    if(n%i==0){
        flag=false;
        break;
    }
}
    if(n==1) cout<<"1 Is neither prime nor composite";
    else  if(flag==true) cout<<n<<" is prime";
    else cout<<n<<" is Composite";
}
