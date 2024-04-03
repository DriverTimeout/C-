#include <iostream>
using namespace std;

int main()
{
    int x[3][5] = { { 12,13,14,15 }, { 22,23,24,25 }, { 31,32,33,24 } };
    int col = sizeof(x[0]) / sizeof(int);
    int rows = (sizeof(x) / sizeof(int)) / col;
    for (int r = 0; r < rows; r++)
    {
        for (int c = 0; c < col-1; c++)
        {
            x[r][col - 1] += x[r][c];
        }
   
    }
    cout << endl;
    for (int r = 0; r < rows;r++)
    {
        for (int c=0; c<col;c++)
        {
            cout << x[r][c] << "\t";
        }
        cout << endl;
    }
}

