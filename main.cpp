
#include <iostream>
using namespace std;

int main()
{
    cout << "mULTIPY" << endl;
    cout << "Sheeesh" << endl;

    int r = 12;
    while (r >= 1)
    {
        cout << "The table of # " << r << endl;
        int c = 12;
        while (c >= 1)
        {
            cout << r << " x " << c << "--> " << (r * c) << endl;
            c--;
        }
        r--;
    }
};

