#include "vehicles.hpp"

int main() {
    Ajoneuvo perus(120, 1998, 1300.0);
    Auto perusauto(160, 2005, 1400.0, 4, 4);
    Henkiloauto henkilo(180, 2015, 1500.0, 4, 4, 5);
    KuormaAuto kuorma(120, 2010, 6000.0, 2, 6, 15000.0);
    Lentokone lento(900, 2018, 18000.0, 12000);
    Laiva laiva(40, 2012, 25000.0, 8.5);

    return 0;
}
