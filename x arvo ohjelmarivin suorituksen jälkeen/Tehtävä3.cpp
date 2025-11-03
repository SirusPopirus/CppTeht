#include <iostream>
using namespace std;

int main() {
    int x = 15;          // x = 15
    int* y;              // x = 15
    y = &x;              // x = 15
    *y = *y + 3;         // x = 18
    int z = 2;           // x = 18
    int* w;              // x = 18
    w = y;               // x = 18
    y = 0;               // x = 18
    y = &z;              // x = 18
    *w = *w + *y;        // x = 20
    int t[] = { 9, 10 };   // x = 20
    y = t;               // x = 20
    *w += *y;            // x = 29
    y++;                 // x = 29
    *w += *y;            // x = 39

    cout << "x = " << x << endl;
    return 0;
}
