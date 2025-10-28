#include <iostream>
using namespace std;


int main()
	{
	int t[5] = { 12, 4, 8, 31, 17 };
	int* y = t;
	int i = 0;
	while (i < 5)
	{
		cout << *y << endl;
		i++;
		y++;

	}



	}