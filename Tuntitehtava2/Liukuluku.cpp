#include <iostream>
using namespace std;

int main()
{
	double x = 2.653;
	double* y = &x;

	cout << x << endl;
	*y += 0.02;
	cout << x << endl;


}