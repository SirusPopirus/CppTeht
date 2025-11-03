#include <iostream>
using namespace std;

void summaaOsoittimilla(int* a, int* b, int* tulos) {
    *tulos = *a + *b;
}

void summaaReferensseina(int& a, int& b, int& tulos) {
    tulos = a + b;
}

int main() {
    int x = 5, y = 7;
    int tulos1, tulos2;

    summaaOsoittimilla(&x, &y, &tulos1);
    cout << "Osoittimilla laskettu summa: " << tulos1 << endl;

    summaaReferensseina(x, y, tulos2);
    cout << "Referensseina laskettu summa: " << tulos2 << endl;

    return 0;
}
