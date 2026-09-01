#include <iostream>
#include <vector>
using namespace std;
int main()
{
    //@@   Time Consuming Method
    //     int arr[]={6,1,2,4,3,7,1,5};
    //     bool flag=false;
    //     for(int i=0;i<9;i++){
    //         for(int j=i+1;j<8;j++){
    //             if(arr[i]==arr[j]){
    //                 cout<<arr[i];
    //                 flag=true;
    //                 break;
    //             }
    //         }
    //      if(flag==true)break;
    //     }
    // }

    // ** Most Efficient Method;
    vector<int> arr{6, 3, 2, 4, 2, 7, 1, 5};
    int sum = 0;
    int n = arr.size() - 1;
    for (int i = 0; i <= n; i++)
    {
        sum += arr[i];
    }
    int s = n * (n + 1) / 2;
    cout << sum - s;
}
