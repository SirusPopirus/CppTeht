#include <iostream>
using namespace std;

int* varaa_taulukko(int n);
void lue_arvot(int* t, int n);
void kaanna(int* t, int n);
void tulosta_arvot(const int* t, int n);

int main()
{
    int n;
    cout << "Anna koko: ";
    cin >> n;

    int* taulukko = varaa_taulukko(n);
    lue_arvot(taulukko, n);
    kaanna(taulukko, n);
    tulosta_arvot(taulukko, n);

    delete[] taulukko;
    return 0;
}