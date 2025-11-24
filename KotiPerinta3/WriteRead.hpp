#ifndef WRITEREAD_HPP
#define WRITEREAD_HPP

#include <string>
#include <fstream>
#include <iostream>
using std::string;

class Writable {
public:
    virtual void writeState(const string& filename) const = 0;
    virtual ~Writable() {}
};

class Readable {
public:
    virtual void readState(const string& filename) = 0;
    virtual ~Readable() {}
};

class Henkilo : public Writable, public Readable {
private:
    string nimi;
    int ika;
    double pituus;

public:
    Henkilo(string n = "?", int i = 0, double p = 0.0)
        : nimi(n), ika(i), pituus(p) {
    }

    void writeState(const string& filename) const override {
        std::ofstream file(filename);
        if (!file) {
            std::cerr << "Tiedoston avaaminen epäonnistui: " << filename << "\n";
            return;
        }
        file << nimi << "\n" << ika << "\n" << pituus << "\n";
    }

    void readState(const string& filename) override {
        std::ifstream file(filename);
        if (!file) {
            std::cerr << "Tiedoston avaaminen epäonnistui: " << filename << "\n";
            return;
        }
        file >> nimi >> ika >> pituus;
    }

    void tulosta() const {
        std::cout << "Nimi: " << nimi
            << ", Ikä: " << ika
            << ", Pituus: " << pituus << "\n";
    }
};

#endif
