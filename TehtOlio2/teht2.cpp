#include <iostream>
#include <string>

using namespace std;

class Lamp
{
private:
	bool _on;


public:
	// CTCR
	Lamp()
	{
		cout << "Lamp created\n";
		_on = false;
	}
	~Lamp()
	{
		cout << "Lamp destroyed\n";
	}

	void turn_on()
	{
		_on = true;
		cout << "Lamp is ON\n";
	}

	void turn_off()
	{
		_on = false;
		cout << "Lamp is OFF\n";
	}
};

int main()
{
	Lamp is;
	is.turn_on();
	is.turn_off();
}