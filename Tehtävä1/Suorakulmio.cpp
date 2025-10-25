#include<iostream>
using namespace std;

int main()
{
	double kanta, korkeus;
	double ala, piiri;

	cout << "kanta : ";
	cin >> kanta;
	cout << "korkeus : ";
	cin >> korkeus;

	ala = kanta * korkeus;
	piiri = 2 * (kanta + korkeus);

	cout << ala << endl;
	cout << kanta << endl;

	return 0;
}