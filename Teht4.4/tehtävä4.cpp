#include <iostream>
using namespace std;

void functioC()
{
	cout << "funktio C" << endl;
}

void functioB()
{
	functioC();
	cout << "funktio B" << endl;
}

void functioA()
{
	functioB();
	cout << "funktio A" << endl;
}

int main()
{
	functioA();
	cout << "Main" << endl;
	return 0;
}