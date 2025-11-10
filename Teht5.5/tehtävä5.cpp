#include <iostream>
using namespace std;

int* varaa_taulukko(int n)
{
    int* x = new int[n];
    return x;
}

void lue_arvot(int* t, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Anna luku " << i + 1 << ":";
        cin >> t[i];
    }
}

void kaanna(int* t, int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        int temp = t[i];
        t[i] = t[n - 1 - i];
        t[n - 1 - i] = temp;
    }
}

void tulosta_arvot(const int* t, int n)
{
    cout << "Arvot: ";
    for (int i = 0; i < n; i++)
    {
        cout << t[i] << endl;
    }
}