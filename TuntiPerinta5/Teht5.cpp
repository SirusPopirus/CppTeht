#include <iostream>
#include <string>
using namespace std;

class Elain {
public:
    Elain() { cout << "Elain luotu\n"; }
    virtual void aantele() = 0;

    virtual ~Elain() { cout << "Elain destruktori\n"; }
};

class Kissa : public Elain {
public:
    Kissa() { cout << "Kissa luotu\n"; }
    void aantele() override { cout << "Miau!\n"; }
    ~Kissa() { cout << "Kissa destruktori\n"; }
};

class Koira : public Elain {
public:
    Koira() { cout << "Koira luotu\n"; }
    void aantele() override { cout << "Hau!\n"; }
    ~Koira() { cout << "Koira destruktori\n"; }
};

int main() {
    Elain* e = new Kissa();
    e->aantele();

    delete e;
    return 0;
}
