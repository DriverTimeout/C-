#include <iostream>
using namespace std;

void BubbleSort(int[]);
int main()
{
    int x[10] = { 34, 12,56,65,7,99, 23 ,5 ,11, 44 };
    cout << "Array Before Sorting\n";
    cout << "======================\n\n";
    for (int i = 0; i < 10; i++)
    {
        cout << x[i] << "\t";
    }
    cout << endl;
    BubbleSort(x);
    cout << "Array after Sorting\n";
    cout << "======================\n\n";
    for (int i = 0; i < 10; i++)
    {
        cout << x[i] << "\t";
    }
    cout << endl;
}

void BubbleSort(int gust[])
{
    int temp = 0;
    for (int i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (gust[i] > gust[j])
            {
                temp = gust[j];
                gust[j] = gust[i];
                gust[i] = temp;
            }
        }

    }

}


