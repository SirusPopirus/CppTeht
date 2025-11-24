#include <iostream>
#include "writeread.hpp"

int main() {
    Henkilo matti("Matti", 30, 178.5);
    matti.writeState("tila.txt");
    std::cout << "Tallennettu:\n";
    matti.tulosta();

    Henkilo uusi;
    uusi.readState("tila.txt");

    std::cout << "Luettu tiedostosta:\n";
    uusi.tulosta();

    return 0;
}
