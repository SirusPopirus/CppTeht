#include <iostream>
#include "laskutoimitus.hpp"

int main() {
    Laskutoimitus* laskin;

    Yhteenlasku yhteen;
    Kertolasku kerto;

    laskin = &yhteen;
    double tulos1 = laskin->laske(3, 4);
    std::cout << "Yhteenlasku 3+4 = " << tulos1 << "\n";

    laskin = &kerto;
    double tulos2 = laskin->laske(3, 4);
    std::cout << "Kertolasku 3*4 = " << tulos2 << "\n";

    return 0;
}
