#include<iostream>
#include<vector>
using namespace std;
int main(){
    int m;
    cout<<"Enter the number of Rows of First Matrix: ";
    cin>>m;
    int n;
    cout<<"Enter the number of Columns of first matrix:  ";
    cin>>n;
     int p;
    cout<<"Enter the number of Rows of second Matrix: ";
    cin>>p;
    int q;
    cout<<"Enter the number of Columns second matrix:  ";
    cin>>q;
    if(n==p){
        int a[m][n];
        cout<<"Enter the Elements of 1st Array: ";
        for(int  i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cin>>a[i][j];
            }
        }       
        int b[p][q];
        cout<<"Enter the elements of 2nd Array: ";
        for(int  i=0;i<p;i++){
            for(int j=0;j<q;j++){
                cin>>b[i][j];
            }
        }
        // Resultant Matrix
        int res[m][q];
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                // multiply
                // For Resultant res[i][j]=a[i][0]*b[0][j] + a[i][1]*b[1][j] + a[i][2]*b[2][j].....
            res[i][j]=0;
            for(int k=0;k<p;k++){
                res[i][j]+=a[i][k]*b[k][j];
            }
            }
        }
        // printing
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                cout<<res[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else{ // n!=p
        cout<<"The Matrices Can't be Multiplied";
    }
}