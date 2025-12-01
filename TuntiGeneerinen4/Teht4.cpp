#include <iostream>
#include <list>
#include <string>

using namespace std;

int main() {
    list<string> jonotus;
    string nimi;

    cout << "Syota nimia (tyhja lopettaa):\n";

    while (true) {
        getline(cin, nimi);
        if (nimi == "") break;
        jonotus.push_back(nimi);
    }

    cout << "\nPoistetaan jonosta:\n";
    while (!jonotus.empty()) {
        cout << jonotus.front() << "\n";
        jonotus.pop_front();
    }
}
