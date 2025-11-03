#include <iostream>
using namespace std;

void nollaa(int* taulukko, int koko) {
    for (int i = 0; i < koko; i++) {
        *(taulukko + i) = 0;
    }
}

int main() {
    int luvut[] = { 5, 8, 12, -3, 7 };
    int koko = sizeof(luvut) / sizeof(luvut[0]);

    cout << "Alkuperäinen taulukko: ";
    for (int i = 0; i < koko; i++)
        cout << luvut[i] << " ";
    cout << endl;

    nollaa(luvut, koko);

    cout << "Nollattu taulukko:     ";
    for (int i = 0; i < koko; i++)
        cout << luvut[i] << " ";
    cout << endl;

    return 0;
}
