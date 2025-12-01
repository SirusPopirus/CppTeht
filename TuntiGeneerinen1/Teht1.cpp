#include <iostream>
#include <string>
using namespace std;

template <typename T>
T maksimi(T a, T b) {
    return (a < b) ? b : a;
}

int main() {
    cout << maksimi(3, 7) << "\n";
    cout << maksimi(3.14, 2.71) << "\n";
    cout << maksimi(string("abc"),
        string("abd")) << "\n";
}
