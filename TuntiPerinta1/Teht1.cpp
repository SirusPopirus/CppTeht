#include <iostream>
#include <string>
using namespace std;

class Henkilo {
public:
    string nimi;
};

class Opiskelija : public Henkilo {
public:
    int opiskelijanumero;
};

int main() {
    Opiskelija o;
    o.nimi = "Matti Meikalainen";
    o.opiskelijanumero = 12345;

    cout << "Nimi: " << o.nimi << ", Numero: " << o.opiskelijanumero << endl;
    return 0;
}
