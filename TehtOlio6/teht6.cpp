#include <iostream>
#include <string>

using namespace std;

class Car
{
private:
	string _brand;
	int _year;

public:
	Car(string brand, int year) : _brand(brand), _year(year)
	{
		cout << "Constructor called for " << _brand << endl;
	}

	~Car()
	{
		cout << "Destructor called for " << _brand << endl;
	}

	void print_info() const
	{
		cout << "Car brand: " << _brand << ", year: " << _year << endl;
	}
};

void print_car_by_value(Car c)
{
	cout << "[By Value] ";
	c.print_info();
}

void print_car_by_ref(const Car& c)
{
	cout << "[By Reference] ";
	c.print_info();
}

int main()
{
	Car car("Volvo", 2015);
	print_car_by_value(car);
	print_car_by_ref(car);
}