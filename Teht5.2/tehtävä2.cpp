#include <iostream>
using namespace std;


void lue_arvot(int* t, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Anna luku " << i + 1 << ":";
        cin >> t[i];
    }
}