#include <iostream>
using namespace std;

int main()
{
	int vuosi;

	cout << "Kirjoita vuosiluku: ";
	cin >> vuosi;

	if (vuosi % 400 == 0)
	{
		cout << "Vuosi on karkausvuosi";
	}
	else if (vuosi % 100 == 0)
	{
		cout << "Vuosi ei ole karkausvuosi";
	}
	else if (vuosi % 4 == 0)
	{
		cout << "Vuosi on karkausvuosi";
	}
	else
	{
		cout << "Vuosi ei ole karkausvuosi";
	}



}
