#include <iostream>
using namespace std;

int main()
{

	int n;

	cout << "Kuinka monta alkiota: ";
	cin >> n;

	int* taulukko = new int[n];

	for (int i = 0; i < n; ++i) {
		taulukko[i] = i;
	}
	for (int i = 0; i < n; ++i) {
		cout << taulukko[i] << " ";
	}
	cout << endl;

	delete[] taulukko;
	return 0;

}
