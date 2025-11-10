#include <iostream>
using namespace std;

void kaanna(int* t, int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        int temp = t[i];
        t[i] = t[n - 1 - i];
        t[n - 1 - i] = temp;
    }
}