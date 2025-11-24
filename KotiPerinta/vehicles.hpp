#ifndef VEHICLES_HPP
#define VEHICLES_HPP

#include <string>

// --- Yliluokka ---
class Ajoneuvo {
protected:
    int huippunopeus;
    int kayttoonottovuosi;
    double paino;

public:
    Ajoneuvo(int huippunopeus_, int kayttoonottovuosi_, double paino_)
        : huippunopeus(huippunopeus_),
        kayttoonottovuosi(kayttoonottovuosi_),
        paino(paino_) {
    }
};

// --- Auto (perii Ajoneuvon) ---
class Auto : public Ajoneuvo {
protected:
    int ovien_lkm;
    int renkaiden_lkm;

public:
    Auto(int huippunopeus_, int kayttoonottovuosi_, double paino_,
        int ovien_lkm_, int renkaiden_lkm_)
        : Ajoneuvo(huippunopeus_, kayttoonottovuosi_, paino_),
        ovien_lkm(ovien_lkm_),
        renkaiden_lkm(renkaiden_lkm_) {
    }
};

// --- Henkilöauto ---
class Henkiloauto : public Auto {
private:
    int max_matkustajat;

public:
    Henkiloauto(int huippunopeus_, int kayttoonottovuosi_, double paino_,
        int ovien_lkm_, int renkaiden_lkm_, int max_matkustajat_)
        : Auto(huippunopeus_, kayttoonottovuosi_, paino_, ovien_lkm_, renkaiden_lkm_),
        max_matkustajat(max_matkustajat_) {
    }
};

// --- Kuorma-auto ---
class KuormaAuto : public Auto {
private:
    double max_kuorma_paino;

public:
    KuormaAuto(int huippunopeus_, int kayttoonottovuosi_, double paino_,
        int ovien_lkm_, int renkaiden_lkm_, double max_kuorma_paino_)
        : Auto(huippunopeus_, kayttoonottovuosi_, paino_, ovien_lkm_, renkaiden_lkm_),
        max_kuorma_paino(max_kuorma_paino_) {
    }
};

// --- Lentokone ---
class Lentokone : public Ajoneuvo {
private:
    int max_lentokorkeus;

public:
    Lentokone(int huippunopeus_, int kayttoonottovuosi_, double paino_,
        int max_lentokorkeus_)
        : Ajoneuvo(huippunopeus_, kayttoonottovuosi_, paino_),
        max_lentokorkeus(max_lentokorkeus_) {
    }
};

// --- Laiva ---
class Laiva : public Ajoneuvo {
private:
    double max_syva;

public:
    Laiva(int huippunopeus_, int kayttoonottovuosi_, double paino_,
        double max_syva_)
        : Ajoneuvo(huippunopeus_, kayttoonottovuosi_, paino_),
        max_syva(max_syva_) {
    }
};

#endif
