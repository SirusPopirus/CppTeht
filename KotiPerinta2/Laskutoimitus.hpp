#ifndef LASKUTOIMITUS_HPP
#define LASKUTOIMITUS_HPP

class Laskutoimitus {
public:
    virtual double laske(double x, double y) = 0;
    virtual ~Laskutoimitus() {}
};

class Yhteenlasku : public Laskutoimitus {
public:
    double laske(double x, double y) override {
        return x + y;
    }
};

class Kertolasku : public Laskutoimitus {
public:
    double laske(double x, double y) override {
        return x * y;
    }
};

#endif
