#include <iostream>
using namespace std;

int laskeSumma(int* taulukko, int koko) {
    int summa = 0;
    for (int i = 0; i < koko; i++) {
        summa += taulukko[i];
    }
    return summa;
}

int main() {
    int koko;
    cout << "Anna taulukon koko: ";
    cin >> koko;

    int* taulukko = new int[koko];

    for (int i = 0; i < koko; i++) {
        cout << "Anna luku " << i + 1 << ": ";
        cin >> taulukko[i];
    }

    int summa = laskeSumma(taulukko, koko);
    cout << "Lukujen summa on: " << summa << endl;

    delete[] taulukko;
    return 0;
}
