#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> v;

    v.push_back(5);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(2);

    for (auto x : v) {
        cout << x << " ";
    }
    cout << "\n";

    int summa = 0;
    for (auto x : v) summa += x;

    double ka = double(summa) / v.size();
    cout << "Keskiarvo: " << ka << "\n";

    sort(v.begin(), v.end());
    cout << "Lajiteltuna: ";
    for (auto x : v) cout << x << " ";
}
