#include <iostream>
using namespace std;

int main()
{
	double hemo;
	string puoli;
	cout << "Oletko nainen vai mies? ";
	cin >> puoli;

	if (puoli == "nainen")
	{
		cout << "Kirjoita hemoglobiini arvosi: ";
		cin >> hemo;
		if (hemo > 175)
			cout << "Hemoglobiinisi on korkea!";
		else if (hemo < 117)
			cout << "Hemoglobiinisi on matala";
		else
		{
			cout << "Hemoglobiini arvosi on normaali";
		}
	}


	else if (puoli == "mies")
	{
			cout << "Kirjoita hemoglobiini arvosi: ";
			cin >> hemo;
			if (hemo > 195)
				cout << "Hemoglobiinisi on korkea!";
			else if (hemo < 134)
				cout << "Hemoglobiinisi on matala";
			else
			{
				cout << "Hemoglobiini arvosi on normaali";
			}
	}

	else
	{
		cout << "Virheellinen syotto!";
	}
	return 0;
}