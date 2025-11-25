#include <iostream>
#include "sort_array.hpp"
#include "Horse.hpp"

using namespace std;

int main() {

    Hevonen hevoset[] = { Hevonen(5), Hevonen(2), Hevonen(8), Hevonen(3) };
    int koko = 4;

    sortArray(hevoset, koko);

    cout << "Järjestetyt hevoset (kavion koko): ";
    for (int i = 0; i < koko; i++) {
        cout << hevoset[i].getKavionKoko() << " ";
    }
    cout << endl;

    return 0;
}
