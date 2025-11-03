#include <iostream>
using namespace std;

int laskePituus(char* mjono) {
    int pituus = 0;

    while (*mjono != '\0') {
        pituus++;
        mjono++;
    }

    return pituus;
}

int main() {
    char mjono[] = "Hello";

    int tulos = laskePituus(mjono);
    cout << "Merkkijonon pituus on: " << tulos << endl;

    return 0;
}
