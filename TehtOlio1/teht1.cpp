#include <iostream>
#include <string>
using namespace std;

class Car
{
private:
	std::string _brand;
	int _year;

public:
	void set_brand(std::string brand)
	{
		_brand = brand;
	}
	void set_year(int year)
	{
		_year = year;
	}
	void print_info() const
	{
		cout << _brand << endl;
		cout << _year << endl;
	}
};

int main()
{
	Car fiat;
	fiat.set_brand("Fiat");
	fiat.set_year(1234);
	fiat.print_info();
	return 0;

}