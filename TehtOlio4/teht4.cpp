#include <iostream>
#include <string>

using namespace std;

class Box
{
private:
	int _size;

public:
	void set_size(int size) { _size = size; }
	void show_size() const
	{
		cout << "Box size: " << _size << endl;
	}
};

int main()
{
	Box* b = new Box();
	b->set_size(42);
	b->show_size();
	delete b;
}