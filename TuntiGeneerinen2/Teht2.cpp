#include <iostream>
#include <string>

using namespace std;

template <typename T>
class Pair {
private:
    T a, b;

public:
    Pair(T first, T second) : a(first), b(second) {}

    T getMax() const {
        return (a < b) ? b : a;
    }

    void print() const {
        cout << "a = " << a << ", b = " << b << "\n";
    }
};

int main() {
    Pair<int> p1(3, 7);
    p1.print();
    cout << "Max: " << p1.getMax() << "\n\n";

    Pair<double> p2(2.5, 9.9);
    p2.print();
    cout << "Max: " << p2.getMax() << "\n\n";

    Pair<string> p3("hello", "world");
    p3.print();
    cout << "Max: " << p3.getMax() << "\n";
}
