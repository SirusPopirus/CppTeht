#include <iostream>
using namespace std;

int* taulukko;
int n;

void varaa_taulukko()
{
    taulukko = new int[n];
}

void lue_arvot()
{
    for (int i = 0; i < n; i++)
    {
        cout << "Anna luku " << i + 1;
        cin >> taulukko[i];
    }
}
void kaanna()
{
    for (int i = 0; i < n; i++)
    {
        int temp = taulukko[i];
        taulukko[i] = taulukko[n - 1 - i];
        taulukko[n - 1 - i] = temp;
    }
}
void tulosta_arvot()
{
    cout << "Arvot: ";
    for (int i = 0; i < n; i++)
    {
        cout << taulukko[i];
    }
    cout << endl;
}

int main()
{
    cout << "Anna koko: ";
    cin >> n;

    varaa_taulukko();
    lue_arvot();
    kaanna();
    tulosta_arvot();

    delete[] taulukko;

    return 0;
}