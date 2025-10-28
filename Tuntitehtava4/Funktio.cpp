#include <iostream>
using namespace std;


void testi(int *luku)
{
	*luku *= 2;
}

int main()
{
	int x = 100;
	testi(&x);
	cout << x << endl;
}