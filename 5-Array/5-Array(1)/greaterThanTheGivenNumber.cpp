#include <iostream>
using namespace std;
int main()
{
    int n, x;
    cout << "enter the size of the array";
    cin >> n;
    cout << "enter the elements of the array";
    int arr[n];
    for (int i = 0; i <= n - 1; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the number to find largest number of this number" << endl;
    cin >> x;
    int count = 0;
    for (int i = 0; i <= n - 1; i++)
    {
        if (arr[i] > x)
            count++;
    }
    cout << count;
}