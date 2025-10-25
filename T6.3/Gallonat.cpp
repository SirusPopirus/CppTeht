#include <iostream>
using namespace std;

double bens;
void lasku()
{
	double litrat = bens * 3.785;
	cout << litrat << " litraa" << endl;
}

int main()
{
	cout << "Monta gallonaa sinulla on: ";
	cin >> bens;

	while (bens > 0)
	{
		lasku();
		cout << "Monta gallonaa sinulla on: ";
		cin >> bens;
	}

}

