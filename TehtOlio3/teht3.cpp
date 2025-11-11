#include <iostream>
#include <string>

using namespace std;

class Point
{
private:
	int _x, _y;

public:
	Point(int x, int y) : _x(x), _y(y) {}

	void print() const
	{
		cout << "(" << _x << ", " << _y << ")\n";
	}
};

int main()
{
	Point p(3, 7);
	p.print();
}