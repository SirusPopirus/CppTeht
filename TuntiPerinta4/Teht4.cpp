#include <iostream>
#include <string>
using namespace std;

class Elain {
public:
    virtual void aantele() = 0;
};

int main() {
    Elain e;
    e.aantele();

    return 0;
}
