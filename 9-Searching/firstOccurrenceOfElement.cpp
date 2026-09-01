#include<iostream>
using namespace std;

int main() {
    int arr[] = {1,2,2,2,3,3,3,3,3,4,5,6,7};
    int n = 13;
    int x = 2;

    int lo = 0;
    int hi = n - 1;
    bool flag = false;

    while(lo <= hi) {
        int mid = lo + (hi - lo) / 2;

        if(arr[mid] == x) {

            if(mid == 0 || arr[mid-1] != x) {
                flag = true;
                cout << mid;
                break;
            }
            else {
                hi = mid - 1;
            }
        }

        else if(arr[mid] < x)
            lo = mid + 1;

        else
            hi = mid - 1;
    }

    if(!flag) cout << -1;
}