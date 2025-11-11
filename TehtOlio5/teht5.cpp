#include <iostream>
#include <string>

using namespace std;

class Book
{
private: 
	std::string _title;
	int _pages;

public:
	Book(std::string title, int pages) : _title(title), _pages(pages) {}

	Book(const Book& other) : _title(other._title), _pages(other._pages)
	{
		std::cout << "Copy constructor called for " << _title << endl;
	}

	void print() const
	{
		cout << _title << " (" << _pages << "pages)" << endl;
	}
};

int main()
{
	Book b1("C++ Basics", 200);
	Book b2 = b1;
}