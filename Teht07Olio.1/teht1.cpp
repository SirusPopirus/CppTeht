#include <iostream>
#include <string>

using namespace std;

class Auto
{
private:
	string rekkari;
	int Hnopeus;
	int Tnopeus;
	double matka;

public:
	Auto(string rt, int huippu) :
		rekkari(rt), Hnopeus(huippu), Tnopeus (0), matka(0.0)
	{}

	void AutonTiedot()
	{
		cout << "Rekisteritunnus: " << rekkari << endl;
		cout << "Huippunopeus: " << Hnopeus << endl;
		cout << "Tämänhetkinen nopeus : " << Tnopeus << endl;
		cout << "Kuljettu matka: " << matka << endl;
	}

};

int main()
{
	Auto auto1("ABC-123", 142);

	auto1.AutonTiedot();

	return 0;
}