#include <iostream>
#include <string>
using namespace std;

class Elain {
public:
    virtual void aantele() = 0;  // puhdas virtuaalifunktio
};

class Kissa : public Elain {
public:
    void aantele() override {
        cout << "Miau!" << endl;
    }
};

class Koira : public Elain {
public:
    void aantele() override {
        cout << "Hau!" << endl;
    }
};

int main() {
    Kissa k;
    Koira ko;

    k.aantele();
    ko.aantele();
}
