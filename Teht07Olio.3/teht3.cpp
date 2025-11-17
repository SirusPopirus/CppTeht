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
		rekkari(rt), Hnopeus(huippu), Tnopeus(0), matka(0.0)
	{
	}

	void kiihdyta(int muutos)
	{
		Tnopeus = Tnopeus + muutos;

		if (Tnopeus > Hnopeus)
		{
			Tnopeus = Hnopeus;
		}

		if (Tnopeus < 0)
		{
			Tnopeus = 0;
		}

	}

	void kulje(double tunti)
	{
		matka = matka + tunti * Tnopeus;
	}

	void AutonTiedot()
	{
		cout << "Rekisteritunnus: " << rekkari << endl;
		cout << "Huippunopeus: " << Hnopeus << endl;
		cout << "Tamanhetkinen nopeus : " << Tnopeus << endl;
		cout << "Kuljettu matka: " << matka << endl;
	}

	int AutonNopeus()
	{
		return Tnopeus;
	}

	double KuljettuMatka()
	{
		return matka;
	}
};

int main()
{
	Auto auto1("ABC-123", 142);

	auto1.kiihdyta(50);
	auto1.kulje(1.5);
	cout << "Auton nopeus: " << auto1.AutonNopeus() << " km/h" << endl;
	cout << "Auto kulki: " << auto1.KuljettuMatka() << " km" << endl;

	return 0;
}