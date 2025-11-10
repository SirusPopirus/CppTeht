#include <iostream>
using namespace std;

void tulosta_arvot(const int* t, int n)
{
    cout << "Arvot: ";
    for (int i = 0; i < n; i++)
    {
        cout << t[i] << endl;
    }
}