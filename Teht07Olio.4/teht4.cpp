#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

class Auto
{
private:
	string rekkari;
	int Hnopeus;
	int Tnopeus;
	double matka;

public:
	Auto() :
		rekkari(""), Hnopeus(0), Tnopeus(0), matka(0.0)
	{
	}

	Auto(string rt, int huippu) :
		rekkari(rt), Hnopeus(huippu), Tnopeus(0), matka(0.0)
	{
	}

	void asetaTiedot(string rt, int huippu)
	{
		rekkari = rt;
		Hnopeus = huippu;
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

	string haeRekisteri() { return rekkari;  }
	int haeHuippunopeus() { return Hnopeus;  }
	int haeNopeus() { return Tnopeus;  }
	double haeMatka() { return matka;  }
};

int main()
{
	srand(time(0));

	Auto autot[10];

	for (int i = 0; i < 10; i++)
	{
		string rekisteri = "ABC-" + to_string(i + 1);
		int huippu = 100 + rand() % 101;
		autot[i].asetaTiedot(rekisteri, huippu);
	}

	bool kilpailuKaynissa = true;
	int tunti = 0;

	while (kilpailuKaynissa)
	{
		tunti++;

		for (int i = 0; i < 10; i++)
		{
			int muutos = (rand() % 26) - 10;
			autot[i].kiihdyta(muutos);
			autot[i].kulje(1.0);

			if (autot[i].haeMatka() >= 10000)
			{
				kilpailuKaynissa = false;
			}
		}
	}

	cout << "\nKilpailu paattyi " << tunti << " tunnin jalkeen. \n\n";

	cout << left << setw(10) << "Rek."
		<< setw(15) << "Huippu"
		<< setw(15) << "Nopeus"
		<< setw(15) << "Matka" << endl;



	for (int i = 0; i < 10; i++)
	{
		cout << left << setw(10) << autot[i].haeRekisteri()
			<< setw(15) << autot[i].haeHuippunopeus()
			<< setw(15) << autot[i].haeNopeus()
			<< setw(15) << fixed << setprecision(1) << autot[i].haeMatka()
			<< endl;
	}
	return 0;
}