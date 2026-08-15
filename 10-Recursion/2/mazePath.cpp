#include <iostream>
using namespace std;
// ^^ By using Two parameters
// int maze(int sr, int sc, int er, int ec)
// {
//     if (sr > er || sc > ec)
//         return 0;
//     if (sr == er && sc == ec)
//         return 1;
//     int rightWays = maze(sr, sc + 1, er, ec);
//     int downWays = maze(sr + 1, sc, er, ec);
//     return rightWays + downWays;
// }
// %% IF we want to use only two parameters--
int maze2(int row, int col)
{
    if (row < 1 || col < 1)
        return 0;
    if (row == 1 && col == 1)
        return 1;
    int rightWays = maze2(row, col - 1);
    int downWays = maze2(row - 1, col);
    return rightWays + downWays;
}
// ** When we want the path, How we moved in the matrix
// void path(int sr, int sc, int er, int ec, string s)
// {
//     if (sr > er || sc > ec)
//         return; // when we move outside of matrix
//     if (sr == er && sc == ec)
//     { // When we reach destination
//         cout << s << endl;
//         return;
//     };
//     path(sr, sc + 1, er, ec, s + 'R'); // when we move right
//     path(sr + 1, sc, er, ec, s + 'D'); // when we move left
// }
int main()
{
    // cout << maze(0, 0, 2, 2)<<endl;
    cout << maze2(3, 3) << endl;
    // path(0, 0, 2, 2, "");
}