#include <iostream>
using namespace std;

int main() {
    int x = 42;
    int* y = &x;

    cout << "x:n arvo: " << x << endl;
    cout << "x:n osoite: " << &x << endl;

    cout << "\ny:n arvo: " << y << endl;
    cout << "y:n osoite: " << &y << endl;

    return 0;
}
