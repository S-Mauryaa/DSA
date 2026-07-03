#include <iostream>
using namespace std;
int main()
{
    int arr[] = {2, 4, 5, 6, 7};
    int *ptr = arr; // giving address
    cout << ptr << endl;
    for (int i = 0; i <= 4; i++)
    {
        cout << *ptr << " ";  // @   also ptr[i] valid and i[ptr] also valid... i[arr] also valid 
        ptr++;
    }
    ptr = arr; // !/   ptr is pointing to first element
    *ptr = 8; // #/    ptr[0]=8
    ptr++; // */       ptr is pointing  to second element
     *ptr = 9;
    ptr--; // ptr is pointing  to second element
    cout << endl;
    for (int i = 0; i <= 4; i++)
    {
        cout << *ptr << " ";
        ptr++;
    }
    ptr =arr; // @/  ptr is pointing  to first elment
}