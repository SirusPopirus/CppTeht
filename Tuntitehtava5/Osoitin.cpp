#include <iostream>
using namespace std;

int main()
{
	int x = 100;
	int* y = &x;
	int** z = &y;

	**z = 200;
	cout << x << endl;


}