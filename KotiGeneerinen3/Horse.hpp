#ifndef HORSE_HPP
#define HORSE_HPP

#include <iostream>

class Hevonen {
private:
    int kavionKoko;

public:
    Hevonen(int koko = 0) : kavionKoko(koko) {}

    int getKavionKoko() const {
        return kavionKoko;
    }

    bool operator>(const Hevonen& other) const {
        return this->kavionKoko > other.kavionKoko;
    }
};

#endif
