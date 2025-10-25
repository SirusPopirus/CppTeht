#include <iostream>
using namespace std;

int main()
{
	double tuuma;
	cout << "Kirjoita tuuma maara: ";
	cin >> tuuma;

	while (tuuma > 0)
	{
		double sentit = tuuma * 2.45;
		cout << sentit << " cm" << endl;

		cout << "Kirjoita tuuma maara: ";
		cin >> tuuma;
	
	}


	return 0;
}