#include <iostream>
using namespace std;
int main()
{
    //   %% using  3rd array to print the sum
    int a[2][3] = {1, 2, 3, 4, 5, 6};
    int b[2][3] = {7, 8, 9, 10, 11, 12};
    int res[2][3];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            res[i][j] = a[i][j] + b[i][j];
        }
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
    // ** without using the 3rd array
    int c[2][3] = {1, 2, 3, 4, 5, 6};
    int d[2][3] = {7, 8, 9, 10, 11, 12};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<c[i][j]+d[i][j]<<" ";
        }
        cout << endl;
    }
    // && to store in one  of the matrices....
    //## b[i][j]=a[i][j]+b[i][j]
}