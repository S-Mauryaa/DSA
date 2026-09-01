#include <iostream>
using namespace std;
void print(int n)
{
    if (n == 0) return; //base Case
    cout << n << endl; // kaam
    print(n-1); // call
}
int main()
{
    print(6);
}