#include <iostream>
#include <string>
using namespace std;

class Elain {
public:
    Elain() { cout << "Elain luotu" << endl; }
};

class Kissa : public Elain {
public:
    Kissa() { cout << "Kissa luotu" << endl; }
};

class Koira : public Elain {
public:
    Koira() { cout << "Koira luotu" << endl; }
};

int main() {
    Elain e;
    Kissa k;
    Koira ko;
    return 0;
}
