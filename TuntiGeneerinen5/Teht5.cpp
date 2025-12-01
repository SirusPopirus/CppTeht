#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    map<string, string> puh;

    puh["Matti"] = "0401234567";
    puh["Liisa"] = "0507654321";
    puh["Kalle"] = "0449876543";

    string nimi;
    cout << "Anna nimi: ";
    cin >> nimi;

    if (puh.find(nimi) != puh.end()) {
        cout << "Numero: " << puh[nimi] << "\n";
    }
    else {
        cout << "Nimea ei loytynyt.\n";
    }
}
